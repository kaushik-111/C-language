// Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_city
// - emp_experience
// - emp_company_name



#include<stdio.h>
#include<string.h>

struct empdent{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    char emp_experience[50];
    char emp_company_name[50];
}emp[100];

int main(){
    int number;

    printf("Enter the number of forms you want to fill : ");
    scanf("%d",&number);

    for (int i = 0; i < number; i++){
        printf("\n");
        printf("Enter the details of empdent %d\n",i+1);
        printf("Enter the employee id : ");
        scanf("%d",&emp[i].emp_id);
        printf("Enter the employee name : ");
        scanf("%s",&emp[i].emp_name);
        printf("Enter the employee age : ");
        scanf("%d",&emp[i].emp_age);
        printf("Enter the employee role : ");
        scanf("%s",&emp[i].emp_role);
        printf("Enter the employee city : ");
        scanf("%s",&emp[i].emp_city);
        printf("Enter the employee experience : ");
        scanf("%s",&emp[i].emp_experience);
        printf("Enter the employee company name : ");
        scanf("%s",&emp[i].emp_experience);
        printf("\n");
    }

    for (int i = 0; i < number; i++){
        printf("\n");
        printf("Details of employee %d\n",i+1);
        printf("employee id : %d\n",emp[i].emp_id);
        printf("employee name : %s\n",emp[i].emp_name);
        printf("employee age : %d\n",emp[i].emp_age);
        printf("employee role : %s\n",emp[i].emp_role);
        printf("employee city : %s\n",emp[i].emp_city);
        printf("employee experience : %s\n",emp[i].emp_experience);
        printf("employee company name : %s\n",emp[i].emp_experience);
        printf("\n");
    }

    return 0;
}