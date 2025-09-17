#include <stdio.h>

int main() {
    
    int mark1, mark2, mark3;
    double average;

    
    printf("Enter the mark for the first subject: ");
    scanf("%d", &mark1);
    printf("Enter the mark for the second subject: ");
    scanf("%d", &mark2);
    printf("Enter the mark for the third subject: ");
    scanf("%d", &mark3);

    
    average = (double)(mark1 + mark2 + mark3) / 3.0;

   
    if (average >= 70) {
        printf("The student is eligible for a Degree course.\n");
    } else if (average >= 50) {
        printf("The student is eligible for a Diploma course.\n");
    } else {
        printf("The student is eligible for a Certificate course.\n");
    }

    return 0;
}
