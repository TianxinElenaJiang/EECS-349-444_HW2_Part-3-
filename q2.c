#include <stdio.h>
int main()
{
    int a[8];
    int i;
    int max;

    a[0] = 12;
    a[1] = 15;
    a[2] = 221;
    a[3] = 3;
    a[4] = 432;
    a[5] = 54;
    a[6] = 16;
    a[7] = 67;

    max = 0;

    for ( i = 0; i <= 7; ++i )
    {
        if ( a[i] > max )
            max = a[i];
    }
    printf("%d", max);
    return 0;
}