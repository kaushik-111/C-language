

//Q.1 Write a Program to find all the negative elements from a given 1D array.

#include<stdio.h>
int main(){

    int size;
    printf("Enter the size of an Array :");
    scanf("%d",&size);

    int arr[size];
    for(int index = 0; index < size; index++){
        printf("Enter the value of a[%d] : ", index);
        scanf("%d",&arr[index]);
    }
    
    for (int index = 0; index < size; index++)
    {
       if (arr[index]<0)
       {
        printf("Negative elements from an Array:- %d\n",arr[index]);

       }
       
    }
    return 0;
}