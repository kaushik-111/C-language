// **Question 3 (for Loop - Continue):**
// Write a C program using a `for` loop to print all odd numbers between 1 and 20, except for 13. Use the `continue` statement to skip printing the number 13.

#include<stdio.h>
int main (){

    int number;
    printf("Enter a Number:");
    scanf("%d",&number);

    int i = 1;

    for(i=1; i<=number; i++){
        if(i==13){
            continue;
        }if(i%2!=0){
        printf("%d\n",i);
        }
    }
}