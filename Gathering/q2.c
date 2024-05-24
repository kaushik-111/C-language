//**Question 2:**Write a C program to calculate the area of a rectangle using a user-defined function. Implement a function called calculateArea() that takes the length and width of the rectangle as inputs and returns the calculated area. Display the area in the main function.

#include<stdio.h>

int calculateArea(int length, int width);
int main(){

    int length, width;

    printf("Enter the length of the rectangle: ");
    scanf("%d",&length);

    printf("Enter the width of the rectangle: ");
    scanf("%d",&width);

    int area = calculateArea(length, width);

    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

int calculateArea(int length, int width){
    int area = length * width;
    return area;
}