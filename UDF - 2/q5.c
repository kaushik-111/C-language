// Convert celsius to fahrenheit using TSRS.


#include<stdio.h>

float convertfahrenheit(int celsius){
    float fahrenheit;
    fahrenheit = ((float)celsius * 1.8) + 32;
    
    return fahrenheit;
}
int main(){

    int celcius;
    printf("Enter temp : ");
    scanf("%d",&celcius);

    printf("Fahrenheit : %f",convertfahrenheit(celcius));
    return 0;
}