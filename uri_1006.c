#include<stdio.h>

int main()
{
    double A,B,C,MEDIA;
    //input 3 float numbers with one digit after the decimal
    scanf("%lf%lf%lf",&A,&B,&C);
    //multiply with each weights
    A=A*2;
    B=B*3;
    C=C*5;
    MEDIA = (A+B+C)/10; //calculate avg number
    printf("MEDIA = %.1lf\n",MEDIA);


    return 0;


}
