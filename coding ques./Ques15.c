#include <stdio.h>

int main() {
    
    int number_of_devices;
   
    printf("Enter the number of devices ON: ");
    scanf("%d", &number_of_devices);

   
    if (number_of_devices % 2 == 0) {
        printf("The number of devices is even.\n");
    } else {
        printf("The number of devices is odd.\n");
    }
    return 0;
}
