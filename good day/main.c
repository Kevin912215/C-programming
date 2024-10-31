#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t;
   printf("Please input the current time 0-24:");
   scanf("%d",&t);
   if (t < 10)
        printf("Good morning!");
    else if (t < 20)
        printf("Good day");
    else
        printf("Good evening");
    return 0;

}
