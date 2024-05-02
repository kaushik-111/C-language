#include<stdio.h>
int main(){
    //Q.4 Write a Program to print the factorial of a number using for loop.

    int  factorial = 1 ;
    
    
    int n ;
    printf("enter value:-");
    scanf("%d",&n);
   
     int  factorial = 1 ;
    
    for(int i = 1; i <= n; i++){
        factorial=factorial*i;
        printf("%d\n",factorial);
    }

    return 0;
}