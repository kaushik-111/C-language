
//Write a C program to take a string input from the user and convert it to uppercase.

#include<stdio.h>
int main(){

    char name[100];

    printf("Enter a String :- ");
    gets(name);
    puts(strupr(name));
    return 0;
}