#include<stdio.h>
int main(){

    //Q.2 Write a Program to count the total number of digits in a number.

    int number;
    int digit = 0;

    printf("enter a number:-");
    scanf("%d",&number);

    while (number >= 1){
       number /= 10;
       digit++;     }
    printf("Total number of digit:%d",digit);
    return 0;
}
