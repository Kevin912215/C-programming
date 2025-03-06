#include <stdio.h>
#include <stdlib.h>

int low,high;

void read ()
{
    printf("Give a small and a larger number!\n");
     scanf("%d%d",&low,&high);
}

int isprime(int p)
{
    int i;
    for (i=2;i<p;i=i+1)
        if(p%i==0)
        return 0;
    return 1;
}
int main()
{
    int i;

    read();

    printf("Primes between %d and %d:\n",low,high);
    for (i=low;i<=high;i=i+1)
    {
        if(isprime(i))
            printf("%d\n",i);
    }
    return 0;
}
