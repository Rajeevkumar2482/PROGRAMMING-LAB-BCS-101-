#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the value of a :- ");
    scanf("%d", &a);
    printf("Enter the value of b :- ");
    scanf("%d", &b);
    printf("Enter the value of c :- ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            printf("Greatest number is a.");
        }
        else {
            printf("Greatest number is c.");
        }
    } else {
        if(b>c){
            printf("Greatest number is b.");
        } else {
            printf("Greatest number is c.");
        }
    }
    return 0;
}