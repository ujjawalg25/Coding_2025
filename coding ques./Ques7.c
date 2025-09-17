#include <stdio.h>
#include <math.h> 

int main() {
    
    float side_a, side_b, hypotenuse;

    
    printf("Enter the length of the first side (a): ");
    scanf("%f", &side_a);

    printf("Enter the length of the second side (b): ");
    scanf("%f", &side_b);

    
    hypotenuse = sqrt((side_a * side_a) + (side_b * side_b)); 
    printf("The hypotenuse of the right-angled triangle is: %.2f\n", hypotenuse);
    return 0;
}