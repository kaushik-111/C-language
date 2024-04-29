#include<stdio.h>
int main(){
   //Q.1 Write a Program to find the maximum number from the given 4 numbers using the ternary operator.
    
    int first_number , secound_number , third_number , fourth_number;

    // enter user first number
    printf("enter first number :-");
    scanf(" %d " ,& first_number);

    printf("enter secound number :-");
    scanf(" %d " ,& secound_number);

    printf("enter third number :-");
    scanf(" %d " ,& third_number);

    printf(" enter fourth number :-");
    scanf(" %d " ,& fourth_number);

    int maximum = (first_number > secound_number && first_number > third_number && first_number > fourth_number) ? first_number : ( secound_number > third_number && secound_number > fourth_number) ? secound_number :( third_number > fourth_number) ? third_number : fourth_number ;
    printf (" this number is maximum %d .",maximum); 
}