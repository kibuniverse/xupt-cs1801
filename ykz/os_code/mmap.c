
  
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <sys/mman.h> 

int get_size(char*, char);
void mmp(int);

int main(int argc, char* argv [])
{
    int size;
    FILE *fp;
    int i;

    if(argc != 3)
    {
        puts("Error: Missing parameter");
        puts("\tFor instance: ( ./a.out 10 M )");
        return 1;
    }
    size = get_size(argv[1], (char)argv[2][0]);
    if(NULL == (fp = fopen("mmp_test","w")))
    {
        puts("Open file fail!");
        return 3;
    }
    for (i = 0; i < size; i++)
        fprintf(fp,"%d ", i);
    fprintf(fp,"\n");
    fclose(fp);
    printf("The size is %s%s file has been created.\n", argv[1], argv[2]);
	mmp(void(size));
    pause();
    return 0;
}

int get_size(char* str, char ch)
{
    int size = 0;
    int length = strlen(str);
    int i;

    for(i = 0; i < length; i++)
        size += ((int)str[i] - 48) * (length - i);
    switch(ch)
    {
        case 'k':
        case 'K':
                return (int)(size/sizeof(int));
        case  'm':
        case 'M':
                return (int)(1024*size/sizeof(int));
        case 'g':
        case 'G':
                return (int)(1024*1024*size/sizeof(int));
        default:
                 puts("Error: For instance: ( ./a.out 10 M )");
                 exit(2);
    }
}

void mmp(int s)
{
    int size = s;
    int *array = (int *)malloc( sizeof(int)*size );
    int fd = 0;
    struct timeval tv1, tv2;

    gettimeofday( &tv1, NULL );
    fd = open( "mmap_test", O_RDWR );
    array = mmap( NULL, sizeof(int)*size, PROT_READ|PROT_WRITE, MAP_SHARED, fd, 0 );
    munmap( array, sizeof(int)*size );
    msync( array, sizeof(int)*size, MS_SYNC );
    //free( array );
    close( fd );
    gettimeofday( &tv2, NULL );
    printf( "Time of mmap: %dms\n", tv2.tv_usec-tv1.tv_usec );
    return;
}


