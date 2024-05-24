//**Question 3:**Write a C program to find the factorial of a given positive integer using a user-defined function. The program should prompt the user to enter a positive integer and then calculate its factorial using a function called calculateFactorial(). Display the calculated factorial in the main function.

#include<stdio.h>

int calculateFactorial(int number);
int main(){

    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int factorial = calculateFactorial(number);

    printf("The factorial of %d : %d", number, factorial);

    return 0;
}

int calculateFactorial(int number){
    int factorial = 1;
    for(int i = number; i > 1; i--){
        factorial *= i;
    }

    return factorial;
}