
    //Q.2 Write a Program to count the frequency of each character in a given string.

#include<stdio.h>
int main(){

    char name[]="development";
    int count = 0;
    printf("Frequency of each letter:\n");
    for(char character = 'a'; character < 'z'; character++){
        count = 0;
        for (int index = 0; name[index] != '\0'; index++)
        {
            if (character == name[index])
             count++;
        }
        if (count > 0)
        {
            printf("%c = %d \n" , character,count);
        }
        
        
    }
    return 0;
}