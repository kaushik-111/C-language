

//Q.1 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.


// Q.1 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.

#include<stdio.h>

struct mark
{
    int rollNo;
    char name[20];
    double chem_marks;
    double maths_marks;
    double phy_marks;
}mark[5];

int main(){

    for (int i = 0; i < 5; i++){
        printf("\nEnter student details : %d\n", (i + 1));

        printf("Enter your Roll-no : ");
        scanf("%d", &mark[i].rollNo);

        printf("Enter your name : ");
        scanf("%s", &mark[i].name);

        printf("Enter your chemistry marks : ");
        scanf("%lf", &mark[i].chem_marks);

        printf("Enter your maths marks : ");
        scanf("%lf", &mark[i].maths_marks);

        printf("Enter your physics marks : ");
        scanf("%lf", &mark[i].phy_marks);
    }

    for (int i = 0; i < 5; i++){

        double total = mark[i].chem_marks + mark[i].maths_marks + mark[i].phy_marks;

        printf("\n\nDetails of student : %d\n\n", (i + 1));

        printf("%s (%d)", mark[i].name, mark[i].rollNo);
        printf("\nChemistry : %lf", mark[i].chem_marks);
        printf("\nMaths : %lf", mark[i].maths_marks);
        printf("\nPhysics : %lf", mark[i].phy_marks);
        printf("\nTotal : %lf", total);
        printf("\nPercentage : %lf\n\n", (total / 3));
    }
        return 0;
}