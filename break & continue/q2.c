//**Question 2 (for Loop - Break):**
//Write a C program using a `for` loop to find the first 10 numbers divisible by 2. Use the `break` statement to exit the loop after finding these numbers.

#include<stdio.h>
int main(){
    int number;

    printf("Enter a Number:");
    scanf("%d",&number);

    int i = 1;

    for (i = 1; i < number; i++){
        if(i==20){
        break;
    }
        if(i % 2 == 0)
       printf("%d\n",i);
    }
    
   return 0;
}