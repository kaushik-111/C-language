
//**Part 2: Functions Taking Nothing and Returning Nothing (TNRN Functions)**

//**Question 1:**
//Write a C program to print "Hello, World!" using a TNRN function named `printHello()`. Call this function from the `main()` function.

#include<stdio.h>

void name(int String){
    printf("Output : - %s",String);
}

void main(){
  int String;
  printf("Enter a Name : - ");
  scanf("%c",&String);
  name(String);
}
