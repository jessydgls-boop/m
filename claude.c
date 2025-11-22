#include <cini.h>

const int n = 4;

int main()
{
    int m;
    m = CINI_read_int();
    CINI_print_int(n * m);
    return 0;
}