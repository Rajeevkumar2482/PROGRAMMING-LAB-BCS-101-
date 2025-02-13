#include<stdio.h>
int main(){
    int n, fact=1;
    printf("Enter the value of n :- ");
    scanf("%d", &n);

    //factorial
    for(int i=n; i>=1; i--){
        fact = fact * i;
    }
    printf("factorial is = %d", fact);
    return 0;
}