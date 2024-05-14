
//Q2. Take input from user for array elements prints vowel in characters.

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
        if( array[index] == 'a'|| array[index] == 'e'|| array[index] == 'i'|| array[index] == 'o' || array[index] == 'u'){
            printf("%c",array[index]);
        }
    }
    return 0;
}