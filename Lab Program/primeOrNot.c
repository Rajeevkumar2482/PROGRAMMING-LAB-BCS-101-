#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter the value of n... :- ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            c++;
        }
    }
    if(c==2){
        printf("Enter number is prime.");
    } else {
        printf("Enter number Not a peime number.");
    }
    return 0;
}