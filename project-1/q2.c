#include<stdio.h>
int main(){
    //Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

    float base_salary ;
    printf("enter your salary:-");
    scanf("%f",&base_salary);
    
    int hra = (base_salary * 10)  / 100;
    int da = (base_salary * 5) / 100;
    int ta = (base_salary * 8) / 100;
    float total  = base_salary + hra + da + ta;
    printf("Output:%f",total);
}