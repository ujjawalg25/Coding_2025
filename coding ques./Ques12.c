#include <stdio.h>
#include <math.h>

int main() {
    
    float principal, rate, time, amount;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (e.g., 0.05 for 5%%): ");
    scanf("%f", &rate);

    printf("Enter the time period in years: ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate), time);

    printf("\nPrincipal Amount: %.2f\n", principal);
    printf("Interest Rate: %.2f%%\n", rate * 100);
    printf("Time Period: %.0f years\n", time);
    printf("Maturity Amount (including interest): %.2f\n", amount);

   
    return 0;
}
