
//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
// Write a Program to find the length of the String by passing a string as an argument using UDF

#include<stdio.h>

int length(char str[100]){
    return strlen(str);
}
int main(){

    char str[100];
    printf("Enter a String : ");
    gets(str);

    printf("%d", length(str));
    return 0;
}
