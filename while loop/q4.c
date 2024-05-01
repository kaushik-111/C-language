#include<stdio.h>
int main(){
    int n ;

    printf("enter value:-");
    scanf("%d",&n);

    int i = 1;

    while( n >= i){
        printf("%d",n);
        n-=2;
    }
}