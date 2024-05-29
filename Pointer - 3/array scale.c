
//Q1. Print value of array using scale of pointer.

#include<stdio.h>
int main(){
    int array[]={ 1 , 2 , 3 , 4};
    int *pointer;
    pointer = &array;
    for(int i = 0; i <= 3; i++){
        printf("%u %d\n" , pointer + i , *(pointer+i));
    }

    return 0;
}
