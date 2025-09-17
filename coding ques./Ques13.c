#include <stdio.h>
#include <math.h>

int main() {
    
    double base, exponent, result;
    printf("Enter the base number (x): ");
    scanf("%lf", &base); 
    printf("Enter the exponent number (y): ");
    scanf("%lf", &exponent);

    result = pow(base, exponent); 
    printf("\nResult: %.2lf raised to the power %.2lf is %.2lf\n", base, exponent, result);

    return 0;
}