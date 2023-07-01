#include<stdio.h>
int main()
{
    int c1,c2,u1,u2;
    float pri_uni1,pri_uni2;

    scanf("%d %d %f",&c1,&u1,&pri_uni1);
    scanf("%d %d %f",&c2,&u2,&pri_uni2);

    double product1= u1*pri_uni1;
    double product2= u2*pri_uni2;
    double all_product = product1+product2;

    printf("VALOR A PAGAR: R$ %.2lf\n",all_product);
    return 0;
}
