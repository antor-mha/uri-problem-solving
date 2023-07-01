#include <stdio.h>

int main() {
    char input[100];
    double base_salary, total_sale;


    scanf("%s %lf %lf", &input,&base_salary,&total_sale);

    double bonus_amount = total_sale * 0.15;
    double final_salary = base_salary + bonus_amount;

    printf("TOTAL = R$ %.2lf\n", final_salary);

    return 0;
}

