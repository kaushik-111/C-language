
//Write a C program to take two strings as input from the user and concatenate them. Display the concatenated string.

#include<stdio.h>
int main(){

    char str1[100] = "abc ";
    char str2[100] = "xyz";
    char str3[100];
    strcpy(str3 ,strcat(str1, str2));

    puts(str3);

        return 0;
}