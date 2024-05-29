
//Q4. Print value of string using array of pointer.

#include<stdio.h>
int main(){

    char Name[]="kaushikrajput";
    char *pointer[20];
    for(int index = 0; Name[index] != NULL; index++){
        pointer[index]= &Name[index];
        printf(" %u %c \n", pointer[index] , *pointer[index]);
    }
    return 0;
}