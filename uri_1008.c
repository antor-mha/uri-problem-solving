#include<stdio.h>
int main()
{
    int num,w_time;
    float p_hours;
    double salary;
    scanf("%d%d%f",&num,&w_time,&p_hours); //input method int>int>float
    salary = w_time*p_hours;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2lf",salary);

    return 0;

}
