#include<stdio.h>
int main(){
    //Q.2 Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.

    float salary ;
    printf("enter your salary:-");
    scanf("%f",&salary);
    
    int hra = (salary * 10)  / 100;
    int da = (salary * 5) / 100;
    int ta = (salary * 8) / 100;
    float total  = salary + hra + da + ta;
    printf("Output:%f",total);
}