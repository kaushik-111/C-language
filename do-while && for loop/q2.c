#include<stdio.h>
int main(){
    //Q.2 Write a Program to print 10 to 1 using for loop.

    int n ;
    printf("enter value:-");
    scanf("%d",&n);

    for(int i = n; i >= 1; i--){
        printf("%d\n",i);
    }
}