#include <stdio.h>

int main() {

    float base, height, area;

    
    printf("Enter the length of the base of the right-angled triangle: ")
    scanf("%f", &base);

  
    printf("Enter the length of the height of the right-angled triangle: ");
    scanf("%f", &height);

    
    area = (base * height) / 2.0;
    printf("The area of the right-angled triangle is: %.2f square units\n", area);

    
    return 0;
}
