#include<stdio.h>
int main(){

    int Number;
    printf("Enter a number:-");
    scanf("%d",&Number);

    (Number%2==0)
    ?printf("This Number is Even Number:-",Number)
    :printf("This Number is Odd Number",Number);



    return 0;
}