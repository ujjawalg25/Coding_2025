#include <stdio.h>

int main() {
   
    int num1, num2, num3;

   
    printf("Enter the score of the first contestant: ");
    scanf("%d", &num1);
    printf("Enter the score of the second contestant: ");
    scanf("%d", &num2);
    printf("Enter the score of the third contestant: ");
    scanf("%d", &num3);

    
    if (num1 >= num2 && num1 >= num3) {
        printf("The first contestant is the winner with a score of %d.\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The second contestant is the winner with a score of %d.\n", num2);
    } else {
        printf("The third contestant is the winner with a score of %d.\n", num3);
    }

    return 0;
}
