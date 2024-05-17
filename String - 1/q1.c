
//Q.1 Write a Program to convert the given string in uppercase without using any string function.

#include<stdio.h>
int main(){

    char name [] = " hello world " ;

       printf("Uppercase string :-");
    for(int index = 0 ; name[index] != '\0' ; index++){
        if(name[index] >= 'a' && name[index] <= 'z'){
            name[index] -= 32;
        }printf("%c ",name[index]);
    }

   


    return 0;
}