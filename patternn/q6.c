
// F E D C B A 
// E D C B A
// D C B A
// C B A
// B A
// A

#include<stdio.h>
int main(){

    int row , col;

    for( row = 70 ; row >= 65; row--){
        for( col = row ; col >= 65 ; col--){
            printf("%c ",col);
        }printf("\n");
    }
    return;
}