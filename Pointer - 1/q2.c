// Using recursion find print Fibonacci series.

#include<stdio.h>

int fibonacci(int number);
int main(){

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("%d\n", fibonacci(number));
    return 0;
}

int fibonacci(int number){
    if(number == 0){
        return 0;
    }
    else if(number == 1){
        return 1;
    }
    
    return fibonacci(number - 1) + fibonacci(number - 2);
}