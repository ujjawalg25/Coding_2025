#include <stdio.h>

int main() {
    
   double amount1, amount2, sum;

    
    printf("Please enter the first amount: ");

  
    scanf("%lf", &amount1);

    
    printf("Please enter the second amount: ");

    
    scanf("%lf", &amount2);

    
    sum = amount1 + amount2;

   
    printf("The total sum is: %.2f\n", sum);

    
    return 0;
}
