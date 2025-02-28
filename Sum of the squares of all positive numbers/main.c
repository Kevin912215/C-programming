#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int sum=0;
    for(i=1;i<12;i=i+1)
        sum=sum+i*i;
    printf("the square sum:%d\n",sum);
    return 0;
}
