#include <stdio.h>
#include <string.h> // Required for the strcmp function

int main() {
    
    int age;
    char nationality[50]; 

   
    printf("Please enter your age: ");
    scanf("%d", &age);

   
    printf("Please enter your nationality (e.g., Indian): ");
    scanf(" %s", nationality);

    
    if (age >= 18 && strcmp(nationality, "Indian") == 0) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    
    return 0;
}