
//**Question 3:**
//Write a TSRN function named `divideNumbers()` that takes two integers as input and calculates their division. Print the result inside the function. Handle the case when the divisor is zero. Call this function from the `main()` function and display the quotient.

#include<stdio.h>

divide_Numbers (int First_Number , int Secound_number ){
    if(First_Number == 0){
      printf("Handle the case when the divisor is zero.");
    }else{
      int divison = First_Number / Secound_number ;
      printf("%d",divison);
    }
   
}

void main(){

    int First_Number , Secound_Number ;

    printf("Enter a First Number : -");
    scanf("%d",&First_Number);

    printf("Enter a Secound Number : -");
    scanf("%d",&Secound_Number);

    divide_Numbers(First_Number , Secound_Number);
}
