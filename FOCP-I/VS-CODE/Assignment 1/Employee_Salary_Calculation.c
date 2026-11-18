#include <stdio.h>

int main() {
    float basicSalary, allowance, bonus;
    float finalSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Allowance: ");
    scanf("%f", &allowance);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    finalSalary = basicSalary + allowance + bonus;

    printf("Final Salary = %.2f\n", finalSalary);

    return 0;
}