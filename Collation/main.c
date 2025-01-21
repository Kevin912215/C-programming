#include <stdio.h>
#include <stdlib.h>

int main()
{
   int data[5] ={-4,3,5,-2,-5};
   int selected[5];
   int n = 0;
   int i;
   for (i=0;i<5;i++)
   {
       if( data[i]< 0)
   {

   selected[n]=data[i];
   n=n+1;
   }

}
printf("Numbers of negativ:%d",n);
return 0;
}
