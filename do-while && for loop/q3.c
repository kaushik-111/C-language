#include<stdio.h>
int main(){
    //Q.3 Write a Program to print even numbers from 1 to N using a do-while loop.

    int n;
    printf("enter value:-");
    scanf("%d",&n);

    int i = 1;

    do{
        printf("%d\n",i*2);
        i++;
    }while(i <= n);
}