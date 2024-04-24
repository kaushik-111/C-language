#include<stdio.h>
int main(){
    //Q.1 Write a Program to convert temperature from degrees Celsius to Fahrenheit. 

    float Celcius;

    // the user to enter temperature in Celcius

    printf("enter temperature in Celcius:");
    scanf("%f",&Celcius);
    
    // caculate temperature in Fahrenheit
    float Fahrenheit = (Celcius*1.8)+32;

    //print result
    printf("The temperature in Fahrenheit :%f",Fahrenheit);

}