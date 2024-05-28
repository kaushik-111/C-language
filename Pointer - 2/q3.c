
//Q3.Find maximum value by returning pointer variable.

#include<stdio.h>
int *max(int *Number_1 , int *Number_2){
    if(*Number_1 < *Number_2){
        return Number_2;
    }else{
        return Number_1;
    }
}
int main(){
    int First_Number = 10;
    int Secound_Number = 12;
    printf("The_Maximum_Number:-%d", *max(&First_Number , &Secound_Number));
}