#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=2,b=3;
   xchg(a,b);
   printf("%d,%d\n",a,b);
   xchgp(&a,&b);
   printf("%d,%d",a,b);
}
void xchg(int x,int y)
{
    int tmp=x;
    x=y;
    y=tmp;
}
void xchgp(int *px,int *py)
{
    int tmp=*px;
    *px=*py;
    *py=tmp;
    return 0;
}
