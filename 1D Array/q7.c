
//7. **Find the minimum element in an array.**

#include<stdio.h>
int main(){


    int size;
    int number = 1;
    printf("Enter the size of an Array :");
    scanf("%d",&size);
    
   
    int arr[size]  ;
    for(int index = 0; index < size; index++){
        printf("Enter the value of a[%d] : ", index);
        scanf("%d",&arr[index]);
    }

    int min = arr[0];

    for(int index = 0; index < size; index++){
        if(arr[index] < min){
            min = arr[index];
        }
    }

    printf("\nThe maximum value : %d", min);
    return 0;
}