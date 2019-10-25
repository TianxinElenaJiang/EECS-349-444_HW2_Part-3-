#include <stdio.h>

int main()
{
    signed int i;

    for ( i = 100; i <= 999; ++i )
    {
        int a = i % 100 / 10;
        int b = i / 100;
        int c = i % 10;
        if ( a*a*a + b*b*b + c*c*c == i )
            printf("%d  ", i);
    }
    return 0;
}
