
//Q1. Swap value using call by value.

#include<stdio.h>

void swap(int n1 , int n2){
    int temp;
    temp = n1;
    n1   = n2;
    n2   = temp;
    printf("First Number : %d \nSecound Number : %d",n1 , n2);
}
void main(){
     int a = 10;
     int b = 12;
     swap(a , b);
}