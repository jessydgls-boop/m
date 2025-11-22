#include <cini.h>
const int n = 4;
int main()
{
    int m = 0;
    CINI_read_int(&m);
    CINI_print_int(n * m);
    return 0;
}