
//Q.1 Write a Program to find the length of a string using a Pointer.

#include <stdio.h>

int main() {

    int count  = 0;
    char string[50],*pointer;
    printf("Enter a String:-");
    gets(string);
    pointer = string;
    while (*pointer != '\0')
    {
       count++;;
       pointer++;
    }
    printf("Length of %s is %d", string , count);
    
    return 0;
}