#include <stdio.h>
int main()
{
    int temp,sum = 0, M, N;
    while (1)
    {
        scanf("%d %d", &M, &N);
        // terminating code in terms of getting 0
        if (M <= 0 || N <= 0)
        {
            return 0;
        }
        else
        {
            // finding small and large number
            if (M > N)
            {
                temp=M;
                M=N;
                N=temp;
            }
            for (int i = M; i <= N; i++)
                {
                    printf("%d ", i);
                    sum += i;
                }
                printf("Sum=%d\n", sum);
                sum=0;
        }
    }
    return 0;
}