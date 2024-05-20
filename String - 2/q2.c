
//Write a C program to take a string input from the user and convert it to lowercase.

#include<stdio.h>
int main (){

    char str[100];

    printf("Enter a String :- ");
    gets(str);
    puts(strlwr(str));
    return 0;
}