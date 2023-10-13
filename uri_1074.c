#include <stdio.h>
int main()
{
    int N, t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &N);
        if (N == 0)
            printf("NULL\n");
        else if (N > 0)
        {
            if (N % 2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else
        {
            if (N % 2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
    }

    return 0;
}