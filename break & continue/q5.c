//**Question 5 (For Loop - Break):**
// Write a C program using a `for` loop to calculate the sum of the first 10 positive integers. However, if the sum becomes greater than 50, use the `break` statement to exit the loop.

#include<stdio.h>
int main (){
    int  i , sum;

    for (i = 1; i < 10; i++){
        sum = sum + i;
         if(sum > 50){
             sum -= i;
            break;
        } 
        
    }
    printf("%d\n",sum);
      
}