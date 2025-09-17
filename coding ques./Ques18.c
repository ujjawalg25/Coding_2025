#include <stdio.h>

int main() {
    
    int year;

   
    printf("Enter a year to check if it's a leap year: ");
    scanf("%d", &year);

    // Leap year conditions:
    // A year is a leap year if it is divisible by 400.
    // OR if it is divisible by 4 but not by 100.
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

   
    return 0;
}
