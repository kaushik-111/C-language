
//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.

#include<stdio.h>
 int main(){

    char str[100];
    int length = 0, flag = 0;

    printf("Enter a string: ");
    scanf("%s", &str);

    while (str[length] != '\0'){
        length++;
    }

    for(int index = 0; index <= length / 2; index++){
        if(str[index] != str[length - index - 1]){
            flag  = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Given string is a Palindrome.\n");
    }
    else{
        printf("Given string is not a Palindrome.\n");

    }

  return 0;
}
