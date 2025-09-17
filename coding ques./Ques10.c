int main() {
    // Declare two integer variables for the numbers to be swapped.
    int num1, num2;

    // Prompt the user to enter the first number.
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number.
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the values of the two numbers before the swap.
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Perform the swap without using a third variable using arithmetic operations.
    // Note: This method can cause an integer overflow if the sum of num1 and num2
    // exceeds the maximum value an integer can hold.
    
    // Step 1: Add the two numbers and store the result in the first variable.
    // The sum now contains the combined value.
    num1 = num1 + num2;

    // Step 2: Subtract the second number from the new first number to get the original first number's value.
    // The result is stored in the second variable.
    num2 = num1 - num2;

    // Step 3: Subtract the new second number (which is the original first number) from the sum
    // to get the original second number. The result is stored in the first variable.
    num1 = num1 - num2;

    // Display the values of the two numbers after the swap.
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Return 0 to indicate successful program execution.
    return 0;
}
