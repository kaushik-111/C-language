// Find area of a rectangle using TSRS.

#include<stdio.h>

int rectangle(int len, int wid){
    return len * wid;
}
    
int main(){
    int len, wid;
    printf("Enter length : ");
    scanf("%d",&len);

    printf("Enter width : ");
    scanf("%d",&wid);

    printf("Square : %d",rectangle(len, wid));
    return 0;
}