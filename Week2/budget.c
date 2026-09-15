#include <stdio.h>
int main() {
    double revenue;
    double expenses;
    double balance;
    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("-------------------\n\n");
    printf("Enter total revenue:");
    scanf("%If", &revenue);
    printf("Enter total expenses: ");
    scanf("%If", &expenses);
    balance = revenue - expenses;
    printf("\n---------------\n");
    printf("Revenue : %.2f\n", revenue);
    printf("Expenses : %.2f\n", expenses);
    printf("Balance : %.2f\n", balance);
    printf("\n---------------\n");
    return 0;
}