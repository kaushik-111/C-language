

//**Part 1: Functions Taking Something and Returning Nothing (TSRN Functions)**

//**Question 1:**
//Write a C program to define a TSRN function named `addNumbers()` that takes two integers as input and calculates their sum. Print the result inside the function. Call this function from the `main()` function and display the sum of two numbers.

#include<stdio.h>

  add_number(int a , int b , int c ){
    int  sum = a + b + c;
    printf("Total Sum : -%d",sum);
 }
 void main(){

int a , b , c;

printf("Enter a First Number : -");
scanf("%d",&a);

printf("Enter a Secound Number : -");
scanf("%d",&b);

printf("Enter a Third Number : -");
scanf("%d",&c);

 add_number(a , b , c);
}