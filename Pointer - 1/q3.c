// Print value using pointer.(Integer , Float and character)

#include<stdio.h>
int main(){
    int a = 10;
    float b = 10.5;
    char c = 'a';

    int *p1;
    float *p2;
    char *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("The Positive Number:-%d\n",*p1);
    printf("The decimal Number:-%f\n",*p2);
    printf("The Character Number:-%c\n",*p3);
    return 0;
}