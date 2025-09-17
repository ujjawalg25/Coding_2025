#include <stdio.h>

int main() {
    
    double a, b, c, discriminant;

    
    printf("Enter the coefficient 'a': ");
    scanf("%lf", &a);
    printf("Enter the coefficient 'b': ");
    scanf("%lf", &b);
    printf("Enter the coefficient 'c': ");
    scanf("%lf", &c);

    // Check if the coefficient 'a' is zero. If so, it's not a quadratic equation.
    if (a == 0) {
        printf("The equation is not quadratic.\n");
        return 1; // Exit with an error code.
    }

    // Compute the discriminant using the formula: discriminant = b^2 - 4ac.
    discriminant = b * b - 4 * a * c;

    // Use an if-else if-else structure to classify the roots based on the discriminant.
    if (discriminant > 0) {
        // If the discriminant is positive, the roots are real and unequal.
        printf("The roots are Real and Unequal.\n");
    } else if (discriminant == 0) {
        // If the discriminant is zero, the roots are real and equal.
        printf("The roots are Real and Equal.\n");
    } else {
        // If the discriminant is negative, the roots are imaginary.
        printf("The roots are Imaginary.\n");
    }

    // Return 0 to indicate successful program execution.
    return 0;
}