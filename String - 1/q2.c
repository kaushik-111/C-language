
//Q.2 Write a Program to convert the given string in lowercase without using any string function.

#include<stdio.h>
int main(){

    char name [] = " HELLO WORLD ";

     printf(" Lowercase string :-");

    for(int index = 0 ; name[index] != '\0'; index++){
        if (name[index] >= 'A' && name[index] <= 'Z')
        {
            name[index] = name[index] + 32;
        }printf("%c ",name[index]);
        
    }
    return 0;
}