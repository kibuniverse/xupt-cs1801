#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int num, char *arg[])
{
    if(2 != num){
        printf("Usage: %s /dev/devfile\n", arg[0]);
        return -1;
    }
    int fd = open(arg[1], O_RDWR);
    if(0 > fd){
        perror("open");
        return -1;
    }
    int ret = read(fd, 0x321, 0);
    printf("read: ret = %d.\n", ret);
    ret = write(fd, 0x123, 0);
    printf("write: ret = %d.\n", ret);
    close(fd);
    return 0;
}
