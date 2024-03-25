#include <stdio.h>
int main()
{
    char A[20], B[20], C[20];
    scanf("%s", &A);
    scanf("%s", &B);
    scanf("%s", &C);

    if (A[0] == 'v')
    {
        if (B[0] == 'a')
        {
            if (C[0] == 'c')
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if (B[0] == 'm')
            {
                if (C[0] == 'o')
                {
                    printf("homem\n");
                }
                else
                {
                    printf("vaca\n");
                }
            }
        }
    }
    else
    {
        if (B[0] == 'i')
        {
            if (C[2] == 'm')
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if (B[0] == 'a')
            {
                if (C[0] == 'h')
                {
                    printf("sanguessuga\n");
                }
                else
                {
                    printf("minhoca\n");
                }
            }
        }
    }

    return 0;
}