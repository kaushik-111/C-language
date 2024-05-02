#include<stdio.h>
int main(){
    //Q.1 Write a Program to print 1 to 10 using a do-while loop.

    int n;

    printf("enter value:-");
    scanf("%d",&n);

    int i = 1;
    do{
        printf("%d\n",i);
        i++;
    }while(i <= n);

   
}