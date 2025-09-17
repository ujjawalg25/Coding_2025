#include <stdio.h>

int main() {
    // Declare variables to store the lengths of the three sides.
    double side1, side2, side3;

    // Prompt the user to enter the lengths of the three sides.
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);

    // First, check if the given sides can form a valid triangle.
    // The sum of the lengths of any two sides of a triangle must be greater than the length of the third side.
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // If the sides form a valid triangle, classify its type.
        if (side1 == side2 && side2 == side3) {
            // All three sides are equal.
            printf("The triangle is Equilateral.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            // At least two sides are equal.
            printf("The triangle is Isosceles.\n");
        } else {
            // No sides are equal.
            printf("The triangle is Scalene.\n");
        }
    } else {
        // If the sides do not meet the criteria, it's not a valid triangle.
        printf("The given side lengths do not form a valid triangle.\n");
    }

    return 0; // Return 0 to indicate successful execution.
}
