#include<stdio.h>
int main()
{
    float num1,num2;
    double num3,num4;

    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%lf",&num3);
    scanf("%lf",&num4);

    printf("A = %f, B = %f\n",num1,num2);
    printf("C = %lf, D = %lf\n",num3,num4);

    printf("A = %.1f, B = %.1f\n",num1,num2);
    printf("C = %.1lf, D = %.1lf\n",num3,num4);

    printf("A = %.2f, B = %.2f\n",num1,num2);
    printf("C = %.2lf, D = %.2lf\n",num3,num4);

    printf("A = %.3f, B = %.3f\n",num1,num2);
    printf("C = %.3lf, D = %.3lf\n",num3,num4);

    printf("A = %.3E, B = %.3E\n",num1,num2);
    printf("C = %.3E, D = %.3E\n",num3,num4);

    printf("A = %.0f, B = %.0f\n",num1,num2);
    printf("C = %.0lf, D = %.0lf\n",num3,num4);

    return 0;
}