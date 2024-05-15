
//### Question 5:
// Write a program to find the sum of elements along the main diagonal of a 2D array. Take input for the array elements from the user.

#include<stdio.h>
int main(){

    int size_of_row , size_of_col ;

    printf("Enter Size Of Row : - ");
    scanf("%d",&size_of_row);

    printf("Enter Size Of Col : - ");
    scanf("%d",&size_of_col);

    int array [size_of_row] [size_of_col] ;
    float sum = 0 ;

    for(int row = 0; row < size_of_row; row++){
        
        for(int col = 0; col < size_of_col; col++){
            printf("Enter Elemant [%d] [%d]:-",row,col);
            scanf("%d",&array[row][col]);
        }
        printf("\n");
}    for(int row = 0; row < size_of_row; row++){
        for(int col = 0; col < size_of_col; col++){
         if(row == col){
            sum = sum + array[col][row];
            }
            
           
        }
}printf(" the sum of elements along the main diagonal:- %f\n",sum);

    return 0;
}