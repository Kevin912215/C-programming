#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    int *p;
    a = 2;
    b = 3;
    printf("%d%d",a,b);
    p = &a;

    *p = 4;
    printf("%d",a);
    p = &b;

    *p = 5;
    printf("%d",b);
    return 0;
}
