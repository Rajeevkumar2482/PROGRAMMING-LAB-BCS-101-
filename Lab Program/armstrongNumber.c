#include<stdio.h>
int main(){
    int n,rem,arm;
    printf("Armstrong number from 1 to 100 :\n");
    
    for(int i=1; i<=100; i++){
        n = i;
        arm = 0;
        while(n>0){
            rem = n % 10;
            arm = (rem * rem * rem) + arm;
            n = n / 10;
        }
        if(i == arm){
            printf("Armstrong number is = %d\t", i);
        }
    }
    //printf("Armstrong number is = %d\t", d);
    return 0;
}