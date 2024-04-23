#include <stdio.h>
int main(){
   // printf("Q.2 Write a Program to find if a given number is neutral or not using a ladder if else.\n\n");

    int a;
    printf("Enter a value of the first number: ");
    scanf("%d\n",&a);
   

    if(a==0){
        printf("This number is Neutral:");
    }else if(a>0){
        printf("this number is positive:");
    }else{
        printf("this number is negative:");
    }
}