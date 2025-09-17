#include <stdio.h>
#include <stdlib.h> // Required for the abs() function

int main() {
    
    int number;

    
    printf("Enter an integer to find its absolute value:\n");
    scanf("%d", &number);

    // Calculate the absolute value using the abs() function from the <stdlib.h> library.
    // The abs() function returns the non-negative value of an integer.
    int absolute_value = abs(number);

    // Display the original number and its absolute value.
    printf("The absolute value of %d is %d.\n", number, absolute_value);

    return 0; 
}
