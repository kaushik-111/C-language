
//Q.3 Write a Program to convert the given string in toggle case without using any string function.

#include<stdio.h>
int main(){

     char name[]="HelLo worLD kaushik rajput kk";
     int count = 0;
      printf(" Toggle case string :-");

     for(int index = 0; name[index] != '\0'; index++){
        if(name[index] >= 'a' && name[index] <= 'z'){
            name[index] -= 32;
        }else if(name[index] >= 'A' && name[index] <= 'Z'){
            name[index] += 32;
        }else if("name[index] == ' ' "){
            count++;
        
        }
            // printf("%c",name[index]);
            
     } printf("%d",count + 1);

    return 0;
}