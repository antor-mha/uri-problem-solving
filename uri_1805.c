#include <stdio.h>
int main()
{
    long long x, y, i, sum = 0;

    scanf("%lld %lld", &x, &y);
    sum = ((y * (y + 1)) - (x * (x - 1))) / 2;
    printf("%lld\n", sum);

    return 0;
}