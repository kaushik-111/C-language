//**Question 4 (for Loop - Continue):**
//Write a C program using a `for` loop to print all even numbers between 20 and 30, except for 14. Use the `continue` statement to skip printing the number 13.

#include<stdio.h>
int main(){
   int number;
   printf("Enter a Number:");
   scanf("%d",&number);

   int i = 20;

   for ( i = 20; i < number; i++){
    if(i ==24){
        continue;
    }if(i % 2 == 0){
        printf("%d\n",i);
    }
   }
   
    return 0;
}