#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int min;
    printf("Please input some integers:\n");
    scanf("%d", &a);
    min = a;
    while (a != 0)
    {

         if (a < min)
            min = a;
    scanf("%d", &a);
    }
    printf("The minimum element of your integers is: %d", min);
    return 0;
}
