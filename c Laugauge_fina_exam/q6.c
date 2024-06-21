
#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

struct Employee {
    char name[50];
    char role[50];
};

int main() {
    printf("Quetion: 6.write a c program that writes any N number of employees name along with their role(designation) in a file called data.txt by taking input from user dynamically.\n");
    struct Employee employees[MAX_EMPLOYEES];
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    if (numEmployees <= 0 || numEmployees > MAX_EMPLOYEES) {
        printf("Invalid number of employees. Please enter a number between 1 and %d.\n", MAX_EMPLOYEES);
        return 1;
    }

    
    printf("Enter details for %d employees:\n", numEmployees);
    for (int index = 0; index < numEmployees; ++index) {
        printf("Employee %d:\n", index + 1);
        printf("Name: ");
        scanf(" %[^\n]s", employees[index].name); // Read name with spaces
        printf("Role: ");
        scanf(" %[^\n]s", employees[index].role); // Read role with spaces
    }


    FILE *data_tst;
    data_tst = fopen("data.txt", "w");
    if (data_tst == NULL) {
        printf("Error opening file.\n");
        return 1;
    }


    for (int index = 0; index < numEmployees; ++index) {
        fprintf(data_tst, "Employee %d\n", index + 1);
        fprintf(data_tst, "Name: %s\n", employees[index].name);
        fprintf(data_tst, "Role: %s\n\n", employees[index].role);
    }

    printf("Data has been written to data.txt successfully.\n");


    fclose(data_tst);

    return 0;
}
