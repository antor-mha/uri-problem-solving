#include<stdio.h>
int main()
{
    double R,radius,PI=3.14159;

    scanf("%lf",&R);
    radius = (4.0/3)*PI*(R*R*R);
    printf("VOLUME = %.3lf\n",radius);

    return 0;    

}