#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Please input a value:");
    scanf("%d",&a);
    if(a < 0)
    {
        a= -a;
        printf("The abs value is: %d", a);
    }
    else
    printf("The abs value is:%d", a);
    return 0;
}
