#include <stdio.h>

int main() {
    // Declare a variable to store the number of employees.
    int num_employees;

    // Prompt the user to enter the number of employees.
    printf("Enter the number of employees: ");
    scanf("%d", &num_employees);

    // Loop through each employee to calculate their salary.
    for (int i = 1; i <= num_employees; i++) {
        // Declare variables for basic salary, bonus, and net salary for the current employee.
        float basic_salary, bonus, net_salary;

        // Prompt the user to enter the basic salary for the current employee.
        printf("\nEnter the basic salary for Employee #%d: ", i);
        scanf("%f", &basic_salary);

        // Calculate the bonus, which is a fixed 12% of the basic salary.
        bonus = 0.12 * basic_salary;

        // Calculate the net salary by adding the basic salary and the bonus.
        net_salary = basic_salary + bonus;

        // Display the results for the current employee.
        printf("Bonus amount: %.2f\n", bonus);
        printf("Net Salary: %.2f\n", net_salary);
    }

    
    return 0;
}
