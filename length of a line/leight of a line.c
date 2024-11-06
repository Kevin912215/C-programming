#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x1;
    int y1;
    int x2;
    int y2;

    printf("Please input the x1: ");
    scanf("%d",&x1);
    printf("Please input the y1: ");
    scanf("%d",&y1);
    printf("Please input the x2: ");
    scanf("%d",&x2);
    printf("Please input the y2: ");
    scanf("%d",&y2);
    int a = y2-y1;
    int b = x2-x1;
    double c = sqrt(a*a+b*b);
    printf("the distance is: %lf",c);
    return 0;


}
