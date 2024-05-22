
//**Question 5:**
//Create a TSRN function called `calculateSquare()` that takes an integer as input and calculates its square. Print the result inside the function. Call this function from the `main()` function and display the square of a number.

#include<stdio.h>

Calculate_Square(int Number){
    int Square = Number * Number;
    printf("Number of Square : - %d",Square);
}
void main(){
    int Number;
    printf("Enter A Number : - ");
    scanf("%d",&Number);
    Calculate_Square(Number);
}