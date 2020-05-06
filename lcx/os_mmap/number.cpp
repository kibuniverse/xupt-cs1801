#include <fstream>

const int MAX = 10000;

int main()
{
    using namespace std;

    ofstream out;
    out.open("mmap_test");
    for(int i = 0; i < MAX; i++)
        out << i << ' ';
    out << '\n';
    return 0;
}
