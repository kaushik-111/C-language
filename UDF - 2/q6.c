// Find square using TSRS.

#include<stdio.h>

int square(int number){
    return number*number;
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);

    printf("Square : %d",square(number));
    return 0;
}