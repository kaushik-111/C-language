
//Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.

#include<stdio.h>
int main(){

    int size_of_row , size_of_col ;

    printf("Enter Row Size : -");
    scanf("%d",&size_of_row);

    printf("Enter Column size : -");
    scanf("%d",&size_of_col);

    int row_sum = 0, col_sum = 0;
    int array[size_of_row][size_of_col];
    for(int row = 0; row < size_of_row ; row++){
        for(int col = 0; col < size_of_col ; col++){
            printf("Enter An Elemant[ %d ] [ %d ]  :-",row,col);
            scanf("%d",&array[row][col]);
        }
    }  
    int max = array[0][0];
    for(int row = 0; row < size_of_row ; row++){
        for(int col = 0; col < size_of_col ; col++){
           
           row_sum = row_sum +array[row][col];
           col_sum = col_sum +array[row][col];
         } 
    }    printf(" The sum of a row : %d , The sum of column : %d",row_sum,col_sum);

    return 0;
}