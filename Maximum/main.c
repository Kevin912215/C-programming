#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int max;
    printf("Please input some integers:\n");
    scanf("%d", &a);
    max = a;
    while (a != 0)
    {

         if (a > max)
            max = a;
    scanf("%d", &a);
    }
    printf("The maximum element of your integers is: %d", max);
    return 0;
}
