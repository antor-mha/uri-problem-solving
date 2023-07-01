#include<stdio.h>
int main()
{
    int s_time,avg_speed;
    scanf("%d%d",&s_time,&avg_speed);

    double distance = s_time*avg_speed;
    double f_need = distance/12;

    printf("%.3lf\n",f_need);
    return 0;
}
