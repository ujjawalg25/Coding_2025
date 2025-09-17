#include <stdio.h>

int main() {
   
    float mark1, mark2, mark3, average;

    
    printf("Enter the mark for the first student: ");
    scanf("%f", &mark1);

    printf("Enter the mark for the second student: ");
    scanf("%f", &mark2);

    printf("Enter the mark for the third student: ");
    scanf("%f", &mark3);

   
    average = (mark1 + mark2 + mark3) / 3.0;

    
    printf("The average mark of the three students is: %.2f\n", average);

    
    return 0;
}
