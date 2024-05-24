// Write a C program that calculates the factorial of a positive integer using recursion

#include<stdio.h>

int factorial(int number) {
    
    if(number == 0 || number == 1) {
        return 1;
    }
    
    return number * factorial(number - 1);
}
int main(){

    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    printf("Factorial : %d\n", factorial(number));
    return 0;
}