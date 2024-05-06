#include<stdio.h>
int main(){
    //// Write a Program to find the sum of a first and the last digit of a number.

    
    // int number;
    // int last_digit;
    // int digit;
    // int counter1 = 0;
    // int counter2 = 0;
    // int number2;

    // printf("Enter a number : ");
    // scanf("%d" ,& number);

    // number2 = number;

    // while (number >= 1)
    // {
    //     number /= 10; 
    //     counter1++;
    // }

    // while (number2 >= 1)
    // {
    //     if(counter2 == 0){
    //         last_digit = number2 % 10;
    //     }
    //     else if((counter1) == counter2){
    //         digit = number2 % 10;
    //     }
    //     number2 /= 10;
    //     counter2++;
    // }

    // int sum = digit + last_digit;

    // printf("digit : %d\n",digit);
    // printf("last digit : %d\n",last_digit);
    // printf("The sum of first and last digit : %d",sum);

    int number , first_number , last_number , sum;

    printf("enter a number:-");
    scanf("%d",&number);

    first_number = number % 10 ;

    while(number>10){
        number =  number / 10 ;
    }

    last_number = number;

    sum = first_number + last_number;

    printf("The sum of the first and the last digit:%d", sum);

    return 0;
}