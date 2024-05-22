
//**Question 2:**
//Define a TSRN function called `multiplyNumbers()` that takes two integers as parameters and calculates their multiplication. Print the result inside the function. Call this function from the `main()` function and display the multiplication of the two numbers

#include <stdio.h>

multiply_number(int First_Number , int Secound_Number){
    int multiply = First_Number * Secound_Number ;
    printf("Two Number Multiply:-%d" , multiply);
}

void main(){
    
    int First_Number , Secound_Number ;

    printf("Enter A First Number:-");
    scanf("%d",&First_Number);

    printf("Enter A Secound Number:-");
    scanf("%d",&Secound_Number);

    multiply_number ( First_Number , Secound_Number);
}