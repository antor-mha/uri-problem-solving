#include<stdio.h>
int main()
{
    int Age,rm,years,months,days;
    scanf("%d",&Age);
    years = Age/365;
    rm = Age%365;
    months = rm/30;
    days = rm%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);

    return 0;
}