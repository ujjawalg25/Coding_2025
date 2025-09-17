#include <stdio.h>

int main() {
  
    int quantity;
    float unit_price, total_amount, discount_amount;

    
    printf("Enter the number of items: ");
    scanf("%d", &quantity);

    printf("Enter the unit price of the item: ");
    scanf("%f", &unit_price);

    
    total_amount = quantity * unit_price;

    if (quantity > 1000) {
       
        discount_amount = total_amount * 0.10;
        
         total_amount = total_amount - discount_amount;
        
        printf("A 10%% discount has been applied.\n");
        printf("Discount amount: $%.2f\n", discount_amount);
    } else {
      
        printf("No discount applied.\n");
    }

    printf("Total amount to be paid: $%.2f\n", total_amount);
 return 0;
}
