#include <stdio.h>
int main() {
    double revenue,expenses, balance;
    int departments;
    double payroll;
    double procurement;
    double assets;
    printf("===================================\n\n");
    printf("MUNICIPAL FINANCIAL SUMMARY   \n");
    printf("-------------------\n\n");
    printf("Enter Total Revenue:N$ ");
    scanf("%If", &revenue);
    printf("Enter Total Expenses: ");
    scanf("%If", &expenses);
    printf(" Enter Number Of Departments: ");
    scanf("%d" , &departments);
    printf(" Enter Total Payroll: N$ ");
    scanf("%If", &payroll);
    printf("Enter Procurement Cost: N$ ");
    scanf("%If", &procurement);
    printf("Enter Value of ASSETS: N$ ");
    scanf("%If", &assets);

    balance = revenue - expenses;
    printf("\n\n");
    printf("=============================\n");
    printf("FINANCIAL SUMMARY REPORT");
    printf("============================\n");
    printf("Total Revenue : %.2f\n", revenue);
    printf("Total Expenses : %.2f\n", expenses);
    printf("-----------------------------\n");
    printf("Operating Balance : N$ %.2f\n", balance);
    printf("-----------------------------\n");
    printf("Departments   :%\n", departments);
    printf("Payroll Cost  :N$ %.2f\n",  payroll);
    printf("Procurement Cost  : N$ %.2f\n", procurement);
    printf("Asset Value    :N$ %.2f\n", assets);
    printf("====================================\n");

    if (balance > 0){
        printf("STATUS: SURPLUS of N$ %.2f \n",  balance);
    }
    else if (balance < 0){
        printf("SATUS: DEFICIT of N$ %.2f\n", -balance);
    }
    else{
        printf("STAUS BUDGET BALANCED \n");
    }
    printf("\n=======================\n");
    printf(" End of Report\n");
    return 0;
}