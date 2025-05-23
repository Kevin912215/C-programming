#include <stdio.h>
#include <stdlib.h>


double sum(double a, double b)
{

    return a+b;
}
double prod(double e, double f)
{

    return e*f;
}
int main()
{
    double c;
    double d;
    double sum1;
    double prod1;
    printf("Please input two numbers:\n");
    scanf("%lf,%lf",&c,&d);
    printf("%lf,%lf",c,d);
    sum1 = sum (c, d);
    prod1 = prod (c, d);
    printf("The sum of a and b is :%lf\n The product of a and b is:%lf",sum1,prod1);
    return 0;
}
