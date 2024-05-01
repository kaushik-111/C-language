#include<stdio.h>
int main(){

//Q.5 Write a Program to print leap years between two given numbers using a while loop.
    int i = 2020;
    
    while(i <= 2040){
       if(i%4==0){
        printf("%d\n",i);
       }
       i++; 
    }
}