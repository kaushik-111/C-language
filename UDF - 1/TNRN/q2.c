
//**Question 2:**
//Create a C program that defines a TNRN function called `printNumbers()` to print integers from 1 to 10. Call this function from the `main()` function.

#include<stdio.h>
void Number(int n){
  for(int index = 1; index <= n; index++){
    printf("%d\n",index);
  }
}
void main(){

    int n;
    printf("Enter A Number :- ");
    scanf("%d",&n);
    Number(n);
}