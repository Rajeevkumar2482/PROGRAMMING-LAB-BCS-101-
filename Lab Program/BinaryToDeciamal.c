#include<stdio.h>
int main(){
    long long binary;
    int  rem, decimal=0, base=1;
    printf("Enter the binary number :- ");
    scanf("%lld", &binary);
    
    while(binary > 0){
        rem = binary % 10 ;  //get the last digit (0 or 1)
        decimal = decimal + rem * base;  //add to decimal number
        binary = binary / 10;    //remove the last digit
        base = base * 2;    //increase the base power (2^0,2^1..)
    }
    printf("decimal number is = %d", decimal);
    return 0;
}