#include <stdio.h>

int main() {
    // Declare variables for item details and bill calculation.
    int item_no, quantity;
    float unit_price, total_amount, discounted_amount;

    // Prompt the user to enter the item number.
    printf("Enter the item number: ");
    scanf("%d", &item_no);

    
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    // Prompt the user to enter the unit price.
    printf("Enter the unit price: ");
    scanf("%f", &unit_price);

    // Calculate the total amount before the discount.
    total_amount = quantity * unit_price;

    // Calculate the final amount after applying a 20% discount.
    // The discount is 20%, which is 0.20. The final price is 80% of the total.
    discounted_amount = total_amount * 0.80;

    // Display the results.
    printf("\n--- Bill Details ---\n");
    printf("Item Number: %d\n", item_no);
    printf("Total Amount (before discount): %.2f\n", total_amount);
    printf("Discount Applied: 20%%\n");
    printf("Final Amount to Pay: %.2f\n", discounted_amount);

    // Return 0 to indicate successful program execution.
    return 0;
}
