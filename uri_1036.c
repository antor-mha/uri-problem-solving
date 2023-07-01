#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,dcrint;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    dcrint= (b*b) - (4*a*c);

    if (dcrint>0 && a!=0)
    {
        double x,y;
        dcrint=sqrt(dcrint);

        x= (-b +dcrint)/(2*a);
        y= (-b -dcrint)/(2*a);

        printf("R1 = %.5lf\n",x);
        printf("R2 = %.5lf\n",y);
    }
    else{
        printf("Impossivel calcular\n");
    }
    
    return 0;
    
}