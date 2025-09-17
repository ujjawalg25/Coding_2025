#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables for the coefficients of the quadratic equation.
    // A quadratic equation is of the form ax^2 + bx + c = 0.
    double a, b, c;
    // Declare variables to store the discriminant and the roots.
    double discriminant, root1, root2, realPart, imaginaryPart;

    // Prompt the user to enter the coefficients.
    printf("Enter the coefficients a, b, and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant (b^2 - 4ac).
    discriminant = b * b - 4 * a * c;

    // Check the value of the discriminant to determine the type of roots.

    // Case 1: Discriminant is greater than 0.
    // This means there are two distinct, real roots.
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and unequal.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    // Case 2: Discriminant is equal to 0.
    // This means there are two real and equal roots.
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    // Case 3: Discriminant is less than 0.
    // This means the roots are imaginary (complex).
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are imaginary (complex) and unequal.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
