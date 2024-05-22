
//**Question 4:**
//Define a TSRN function `calculateCube()` that takes an integer as input and calculates its cube. Print the result inside the function. Call this function from the `main()` function and display the cube of a number.

#include<stdio.h>
Calculate_Cube(int Number){
   int Cube = Number * Number * Number;
   printf("Number of cube : %d",Cube);
}

void main(){
    int Number;
    printf("Enter A Number : - ");
    scanf("%d",&Number);
    Calculate_Cube(Number);
}