#include<stdio.h>
int main()
{
    int i,count=0;
    float num,sum=0;
    
    for ( i = 1; i <= 6; i++)
    {
        scanf("%f",&num);
        if (num>0)
    {
        count++;
        sum = sum+num;
    }   
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
    return 0;
}
