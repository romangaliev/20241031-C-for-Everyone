//Option 2 (Natural or Social Science Focus)

/* TASK
Write a struct that has a member that is the name of a business department: 
HR, Sales, Research, Software, and Executive (use enums for the 4 departments).  

A second member that is an annual salary as an int. 

A third member that is a social security number(unsigned). 

Generate 10 employees with different social security numbers. 

Invent a salary generator for each department 
(use some base salary for the department and add in a randomly generated offset).  

Print out the 10 employees and their values to the screen-one line at a time.

*/

#define _CRT_SECURE_NO_WARNINGS // to avoid 

#include <stdio.h>
#include <stdlib.h> // to have rand and srand functions
#include <time.h> // to use time for srand
#include <string.h> // to use the strcpy function

// Define the employe_job struct
typedef enum department { HR, Sales, Research, Software, Executive } department;


// Define the employe_job struct that includes a department struct
typedef struct employe_job
{ 
    department dep; // enum
    int salary; 
    unsigned long social_number;
} employe_job;

// Define the employe struct that includes a employe_job struct
typedef struct employe
{ 
    char* name;  // dinamic memory allocation for the char arrays will follow
    char* surname; // dinamic memory allocation for the char arrays will follow
    employe_job job; // struct
} employe;
    // name and surname have 20 chars length limits

// will help to senerate salary with ofset
int salary_offset(int min_salary) 
{
    return min_salary + (rand() % 10000); // offset will be within 10000 range limit
    // srand(time()) provides new seed each time making the rand() output more random
}

// will help to print the dapartment name in a human readable format
char* print_department(const department _dep)
{
    switch (_dep)
    {
    case(HR): return "HR"; break; 
    case(Sales): return "Sales"; break;
    case(Research): return "Research"; break;
    case(Software): return "Software"; break;
    case(Executive): return "Executive"; break;
    default:
        return "Unknown"; break;
    }
}


int register_employee(char* _name, char* _surname, department _dep) // returns 0 in case of failure
{
    int min_salary = 5000; //the minimum amount of salary

    // Create a record of employe
    employe  employe_record;

    // Allocate memory for the name and surname
    employe_record.name = malloc(strlen(_name) + 1); // + 1 is for the '\0'
    if (employe_record.name == NULL)
    {
        fprintf(stderr, "Failed to allocate memory for name\n"); return -1;
        // Exit the program with an error code 
    }
    employe_record.surname = malloc(strlen(_surname) + 1); // + 1 is for the '\0'
    if (employe_record.surname == NULL) {
        fprintf(stderr, "Failed to allocate memory for surname\n");
        free(employe_record.name); // Free previously allocated memory 
        return -1; // Exit the program with an error code 
    }
    // Copy the strings into the allocated memory 

    strcpy(employe_record.name, _name);
    strcpy(employe_record.surname, _surname);

    employe_record.job.dep = _dep;
    employe_record.job.salary = salary_offset(min_salary);

    // Social Insurance number pseudo-random range is 1000000000 - 1000010000
    employe_record.job.social_number = 1000000000 + rand() % 10000;

    // the record is printed one line at a time as per task:

    printf("%s %s, department: %s, salary: %d, social insurance number: %d\n",
        employe_record.name,
        employe_record.surname,
        print_department(employe_record.job.dep), // converts enum into string
        employe_record.job.salary,
        employe_record.job.social_number);


    // Free the allocated memory after using it (printing out the screen)
    free(employe_record.name);
    free(employe_record.surname);

    return 0;
}



int main()
{

    //Seed the random number generator:
    srand((unsigned int)time(NULL)); //cast the time_t value to 'unsigned int'

    
    printf("Below is a list of TOP 10 talents of our Company:\n\n");
    //fill in a record of eployee and print it
    //1
    if (register_employee("#1 Adam", "Smith", HR) == -1) 
        printf("Adam Smith registration failed");
    //2
    if (register_employee("#2 John", "Dow", HR) == -1)
        printf("John Dow registration failed");
    //3
    if (register_employee("#3 Mathew", "Builder", Executive) == -1)
        printf("#3 Mathew Builder registration failed");
    //4
    if (register_employee("#4 Elice", "Green", Sales) == -1)
        printf("#4 Elice Green registration failed");
    //5
    if (register_employee("#5 Edward", "Wheeler", Sales) == -1)
        printf("Edward Wheeler registration failed");
    //6
    if (register_employee("#6 Amanda", "Spenser", Sales) == -1)
        printf("Amanda Spenser registration failed");
    //7
    if (register_employee("#7 Albert", "Enshtain", Software) == -1)
        printf("Albert Enshtain registration failed");
    //8
    if (register_employee("#8 Nicola", "Tesla", Software) == -1)
        printf("Nicola Tesla registration failed");
    //9
    if (register_employee("#9 Elisabet", "Nice", Software) == -1)
        printf("Elisabet Nice registration failed");
    //10
    if (register_employee("#10 Kate", "Dower", Research) == -1)
        printf("Kate Dower registration failed");

    return 0;
}