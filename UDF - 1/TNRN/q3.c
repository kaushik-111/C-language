
//Create a C program that defines a function printTable() which takes no arguments and prints the multiplication table of 5 from 1 to 10. Call this function from the main() function.

#include<stdio.h>
void Number(int n){
  for(int index = 1; index <= n; index++){
    printf("%d\n",index*5);
  }
}
void main(){

    int n;
    printf("Enter A Number :- ");
    scanf("%d",&n);
    Number(n);
}