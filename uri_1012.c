#include<stdio.h>
int main()
{
    double A,B,C;
    double area_triangle,area_radius,area_trapezium,area_square,area_rectangle;

    scanf("%lf%lf%lf",&A,&B,&C);
    const double PI = 3.14159;

    area_triangle = 0.5*A*C;
    area_radius = PI*(C*C);
    area_trapezium = (A+B)/2*C;
    area_square = (B*B);
    area_rectangle = A*B;

    printf("TRIANGULO: %.3lf\n",area_triangle);
    printf("CIRCULO: %.3lf\n",area_radius);
    printf("TRAPEZIO: %.3lf\n",area_trapezium);
    printf("QUADRADO: %.3lf\n",area_square);
    printf("RETANGULO: %.3lf\n",area_rectangle);

    return 0;

}
