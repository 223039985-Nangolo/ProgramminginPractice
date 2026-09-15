#include <stdio.h>
int main() {
    double revenue;
    double expenses;
    double balance;
    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("-------------------\n\n");
    printf("Enter Total Revenue:");
    scanf("%If", &revenue);
    printf("Enter Total Expenses: ");
    scanf("%If", &expenses);
    balance = revenue - expenses;
    printf("\n======BUDGET REPORT===========\n");
    printf("Total Revenue : %.2f\n", revenue);
    printf("Total Expenses : %.2f\n", expenses);
    if (balance > 0){
        printf("SURPLUS    : N$ %.2f\n",  balance);
    }
    else if (balance < 0){
        printf("DEFICIT    :N$ %.2f\n", -balance);
    }
    else{
        printf("BALANCED BUDGET: N$ 0.00\n");
    }
    printf("\n---------------\n");
    return 0;
}