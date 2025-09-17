#include <stdio.h>

int main() {
    
    int angle1, angle2, angle3;

    
    printf("Enter the three angles of the triangle:\n");

   
    printf("Angle 1: ");
    scanf("%d", &angle1);
    printf("Angle 2: ");
    scanf("%d", &angle2);
    printf("Angle 3: ");
    scanf("%d", &angle3);

   
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("The given angles form a valid triangle.\n");
    } else {
        printf("The given angles do not form a valid triangle.\n");
    }

    return 0; 
}
