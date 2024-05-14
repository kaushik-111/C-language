
// Q4. Take input from user for array elements prints it's  characters.
#include<stdio.h>
int main(){

    int size;
    printf("Enter Size of array:-");
    scanf("%d",&size);

    char array[size];
    for(int index = 0; index < size; index++){
        printf("Enter a Element : -");
        scanf(" %c",&array[index]);
    }for(int index = 0; index < size; index++){
            printf("%c\n",array[index]);
       
    }
    return 0;
}