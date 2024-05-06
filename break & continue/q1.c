// **Question 1 (for  Loop - Break):**
// Write a C program using a `while` loop to find the first 5 numbers divisible by 8. Use the `break` statement to exit the loop after finding these numbers.

#include<stdio.h>
int main(){

    int number;

    printf("Enter a Number:");
    scanf("%d",&number);

    int i = 1;
    
    while(i <= number){
        if(i==48){
        break;
    }
        if(i%8==0)
        printf("%d\n",i);
        i++;
    }

    return 0;
}