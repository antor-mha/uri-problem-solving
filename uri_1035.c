#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A,B,C,D,sum1,sum2,c,d;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    sum1 = C+D;
    sum2 = A+B;
    c = abs(C);
    d = abs(D);
    if (B>C && D>A && sum1>sum2 && c && d && A%2==0)
    {
        printf("Valores aceitos\n");
    }else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
    
}