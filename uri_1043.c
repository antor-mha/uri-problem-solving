#include <stdio.h>
int main()
{
    float A, B, C, p, a;
    scanf("%f%f%f", &A, &B, &C);
    p = A + B + C;
    a = ((A + B )/ 2) * C;
    if (A+B > C && B+C > A && A+C > B)
    {
        printf("Perimetro = %.1f\n", p);
    }
    else
    {
        printf("Area = %.1f\n", a);
    }
    return 0;
}