#include<stdio.h>
int main()
{
    int N,hours,min,sec,rm;
    scanf("%d",&N);

    hours = N/3600;
    rm = N%3600;
    min = rm/60;
    sec = rm%60;

    printf("%d:%d:%d\n",hours,min,sec);

    return 0;
}    