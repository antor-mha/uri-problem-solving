#include<stdio.h>
int main()
{
    double A,B;
    scanf("%lf%lf",&A,&B); //input 2 float values
    //multiplying each with their weight
    A=A*3.5;
    B=B*7.5;
    double MEDIA = (A+B)/11; //avg of A and B
    printf("MEDIA = %.5lf\n",MEDIA);

    return 0;

}
