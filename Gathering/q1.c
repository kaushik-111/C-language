//**Question 1:**  Write a C program that calculates the sum of squares of all even numbers from 1 to a given positive integer `n`. Implement a user-defined function called `calculateSumOfSquares` that takes an integer `n` as input from user  and returns the sum of squares of all even numbers from 1 to `n`. Display the calculated sum in the `main` function use TSRS.

#include<stdio.h>

int calculateSumOfSquares(int number);
int main(){

    int number, sum;

    printf("Enter a number : ");
    scanf("%d",&number);

    sum = calculateSumOfSquares(number);

    printf("The sum of squares of all even numbers from 1 to %d : %d\n", number, sum);
    return 0;
}

int calculateSumOfSquares(int number){
    int sum = 0;
    for(int i = 1; i <= number; i++){
        if(i % 2 == 0){
            sum += i * i;
        }
    }

    return sum;
}
