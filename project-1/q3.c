#include<stdio.h>
int main(){
    // Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.

    float first,secound;
    printf("enter first angle:");
    scanf("%f",&first);
    printf("enter first angle:");
    scanf("%f",&secound);
    float third = 180-(first+secound);
    printf("third angle : %f",third);
}