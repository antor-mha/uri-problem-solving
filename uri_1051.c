#include<stdio.h>
int main()
{
    double salary,tax;
    printf("Enter your salary:\n");
    scanf("%lf",&salary);
    if (salary>2000.00)
    {
        salary=salary-2000.00;
        if (0 < salary && salary<=1000)
        {
            tax= salary*0.08;
        }else{
            salary= salary-1000;
            tax= salary*0.08;
        }
        
    }
    else{
        printf("Isento\n");
    }
    
    return 0;
}