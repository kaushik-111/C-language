// Using recursion find factorial.

#include<stdio.h>

int factorial(int number);
int main(){

    int number;

    printf("Enter a number : ");
    scanf("%d",&number);

    int answer = factorial(number);

    printf("factorial of %d : %d", number, answer);
    

    return 0;
}

int factorial(int number){

    if(number == 1 || number == 0){
        return 1;
    }

    return number * factorial(number - 1);
}