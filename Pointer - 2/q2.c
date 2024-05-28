
//Q2. Swap value using call by reference.

#include<stdio.h>

void swap(int *Number_1 , int *Number_2){
    int *Temp;
    Temp = Number_1;
    Number_1 = Number_2;
    Number_2 = Temp;
    printf("First_Number:-%d\nSecound_Number:-%d", *Number_1 , *Number_2);
}
void main(){
    int First_NUmber = 10;
    int Secound_Number = 12;
    swap(&First_NUmber , &Secound_Number);
}