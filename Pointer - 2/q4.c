
//Q4.Find minimum value by returning pointer variable.

#include<stdio.h>
int *min(int *Number_1 , int *Number_2){
    if(*Number_1 > *Number_2){
        return Number_2;
    }else{
        return Number_1;
    }
}
int main(){
    int First_Number = 10;
    int Secound_Number = 12;
    printf("The_Minimum_Number:-%d", *min(&First_Number , &Secound_Number));
}