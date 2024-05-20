
//Write a C program to take a string input from the user and find its length.
#include<stdio.h>
int main(){

char str[100];

printf("Enter a String :- ");

gets(str);
printf("%d",strlen(str));

return 0;
}