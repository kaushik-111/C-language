
//6. **Find the maximum element in an array.**

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

    int max = arr[0];

    for(int index = 0; index < size; index++){
        if(arr[index] > max){
            max = arr[index];
        }
    }

    printf("\nThe maximum value : %d", max);
    return 0;
}