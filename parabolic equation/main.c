#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;
    printf("Please read the value of a,b and c parameters of a parabolic",a,b,c);
    scanf("%lf,%lf,%lf",&a,&b,&c);
    //printf("%lf,%lf,%lf",a,b,c);
    double Discr;
    Discr =b*b-4*a*c ;
    if (Discr > 0) {
            printf("%lf,%lf",((-b+sqrt(Discr))/(2*a)),((-b-sqrt(Discr))/(2*a)));
    }
    if (Discr < 0) {

            printf("No answer");
    }
    if (Discr == 0){

            printf("%lf",(-b)/(2*a));

    }

return 0;
}

