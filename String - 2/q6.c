// Write a C program to take two strings as input from the user and compare if they are equal. If they are equal, print "Strings are equal," else print "No, they are not equal."

#include<stdio.h>
int main(){
    char str1[100];
    char str2[100];

    printf("Enter first string : ");
    gets(str1);

    printf("Enter second string : ");
    gets(str2);

    if(strcmp(str1,str2) == 0){
        printf("strings are equal");
    }
    else{
        printf("no strings are equal");
    }

    return 0;
}