#include<stdio.h>
int main()
{
    int X;
    float Y;

    scanf("%d %f",&X,&Y);
    double avg_cons = X/Y;
    printf("%.3lf km/l\n",avg_cons);

    return 0;
}
