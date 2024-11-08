#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i=0;

    printf("Please input the length of the line:");
    scanf("%d",& n);
    printf("+");
    while (i<n)
   {
       printf("-");
        i++;
    }
        printf("+");
    return 0;
}
