#include <stdio.h>


#define PI 3.14159

int main() {
    
    float radius, area;

    
    printf("Enter the radius of the circular fountain (e.g., in meters): ");
    scanf("%f", &radius); 
    area = PI * radius * radius;
  printf("The area of the circular fountain is: %.2f square units\n", area);

    
    return 0;
}