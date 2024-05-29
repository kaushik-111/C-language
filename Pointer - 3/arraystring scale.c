
//Q3. Print value of string using scale of pointer.

#include<stdio.h>
int main(){

    char Name[]= "kaushik";
    char *pointer;
    pointer = &Name; 
    for(int index = 0; Name[index] != NULL; index++){
        printf(" %u  %c \n" , pointer + index , *(pointer+index));
    }
    return 0;
}