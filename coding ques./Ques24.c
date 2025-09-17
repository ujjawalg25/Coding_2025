#include <stdio.h>
#include <math.h>

int main() {
    
    int number;
    
    
    double result;

   
    printf("Enter a number: ");
    scanf("%d", &number);

   
    if (number % 2 == 0) {
        
        result = pow(number, 2);
        printf("The number is even. Its square is: %.2f\n", result);
    } else {
       
        result = pow(number, 3);
        printf("The number is odd. Its cube is: %.2f\n", result);
    }

    return 0;
}
