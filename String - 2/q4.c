
//Write a C program to assign a string to a variable and display it to the user.

#include<stdio.h>
int main(){
    
    char str[100];
    
    strcpy(str,"Hello World!");
    puts(str);
}