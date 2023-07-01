#include<stdio.h>
int main()
{
    double X,Y,total,p1=4.00,p2=4.50,p3=5.00,p4=2.00,p5=1.50;
    scanf("%lf%lf",&X,&Y);
    if (X==1)
    {
        printf("Total: R$ %.2lf\n",Y*p1);
    }else if (X==2)
    {
        printf("Total: R$ %.2lf\n",Y*p2);
    }else if (X==3)
    {
        printf("Total: R$ %.2lf\n",Y*p3);
    }else if (X==4)
    {
        printf("Total: R$ %.2lf\n",Y*p4);
    }else if (X==5)
    {
        printf("Total: R$ %.2lf\n",Y*p5);
    }
    
    return 0;   
}