#include<stdio.h>
#include<math.h>
int main()
{

    float x,salary,earned;
    int percentage;
    scanf("%f",&x);

    if (x>0 && x<=400.00)
    {
        salary = (((15 * x)/100)+x);
        earned = (15*x)/100;
        percentage = 15;
    }
    else if (x<=800.00)
    {
        salary = (((12 * x)/100)+x);
        earned = (12*x)/100;
        percentage = 12;
    }
    else if (x<=1200.00)
    {
        salary = (((10 * x)/100)+x);
        earned = (10*x)/100;
        percentage = 10;
    }
    else if (x<=2000.00)
    {
        salary = (((7 * x)/100)+x);
        earned = (7*x)/100;
        percentage = 7;
    }
    else
    {
        salary = (((4 * x)/100)+x);
        earned = (4*x)/100;
        percentage = 4;
    }

    printf("Novo salario: %.2f\n",salary);
    printf("Reajuste ganho: %.2f\n",earned);
    printf("Em percentual: %d %%\n",percentage);

    return 0;
}