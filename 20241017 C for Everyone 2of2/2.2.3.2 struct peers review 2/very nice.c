#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Department's Enum
enum department {
    HR, Sales, Research, Software, Executive
};

// Struct for Employee
struct employee {
    enum department dept;
    int salary;
    unsigned int ssn;
};

// Function to generate department's salary
int generate_salary(enum department dept) {
    int base_salary;

    // Assign baseline salary based on department
    switch (dept) {
    case HR:
        base_salary = 50000;
        break;
    case Sales:
        base_salary = 60000;
        break;
    case Research:
        base_salary = 70000;
        break;
    case Software:
        base_salary = 80000;
        break;
    case Executive:
        base_salary = 100000;
        break;
    default:
        base_salary = 0;
    }

    // Generate a random offset
    int offset = rand() % 10001 - 5000;

    // Add the random offset to the base salary
    return base_salary + offset;
}

// Function to generate a random SSN
unsigned int generate_ssn() {
    return rand() % 900000000 + 100000000; // Generates a random 9-digit SSN
}

int main() {
    srand(time(NULL)); // Initialize random number generator

    struct employee employees[10]; // Array to store 10 employees

    // Populate the employee array
    for (int i = 0; i < 10; i++) {
        employees[i].dept = rand() % 5; // Random department (0 to 4)
        employees[i].salary = generate_salary(employees[i].dept);
        employees[i].ssn = generate_ssn();
    }

    // Print out employee's details
    for (int i = 0; i < 10; i++) {
        char* dept_name;
        switch (employees[i].dept) {
        case HR:
            dept_name = "HR";
            break;
        case Sales:
            dept_name = "Sales";
            break;
        case Research:
            dept_name = "Research";
            break;
        case Software:
            dept_name = "Software";
            break;
        case Executive:
            dept_name = "Executive";
            break;
        default:
            dept_name = "Unknown";
        }

        printf("Employee %d: Department: %s, Salary: $%d, SSN: %u\n",
            i + 1, dept_name, employees[i].salary, employees[i].ssn);
    }

    return 0;
}