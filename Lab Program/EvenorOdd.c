#include<stdio.h>
int main(){
    int n;
    printf("Enter a number n :- ");
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("Input number is enven.");
    }
    else{
        printf("Input number is odd.");
    }
    return 0;
}  