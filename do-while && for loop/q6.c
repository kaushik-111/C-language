#include<stdio.h>
int main(){
    //Q.5 Write a Program to print the sum of all numbers using for loop.

    int sum , n;
    printf("enter value:-");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        sum = sum + i;
        printf("%d",sum);
    }
}