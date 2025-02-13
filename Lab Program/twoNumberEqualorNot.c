#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a :- ");
    scanf("%d", &a);
    printf("enter the value of b :- ");
    scanf("%d", &b);
    if(a==b) {
        printf("Input number a and b are equal.");
    } else {
        printf("Input number a and b are not equal.");
    }
    return 0;
}