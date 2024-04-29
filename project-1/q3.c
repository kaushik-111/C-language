#include<stdio.h>
int main(){
    // Q.3 Write C Program to find the third angle of a right triangle if two other angles are given.

    float first_angel,secound_angel;

    //the user to enter the first angle
    printf("enter first angle:");
    scanf("%f",&first_angel);

    //the user to enter the secound angle
    printf("enter first angle:");
    scanf("%f",&secound_angel);
    
    float third_angel = 180-(first_angel + secound_angel);
    printf("third angle : %f",third_angel);
}