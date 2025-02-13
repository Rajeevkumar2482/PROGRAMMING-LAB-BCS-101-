#include<stdio.h>
int main(){
    int year;
    printf("Enter the any year :- ");
    scanf("%d", &year);
    
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("Input year is a leap year.");
            } else {
                printf("Input year Not a leap year.");
            }
        } else {
            printf("Input year is a leap year.");
        }
    } else {
        printf("Input year Not a leap year.");
    }
    return 0;
}