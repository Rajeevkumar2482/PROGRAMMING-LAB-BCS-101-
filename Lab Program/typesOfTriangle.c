#include<stdio.h>
int main(){
    float a, b, c;
    printf("Enter the value of a :- ");
    scanf("%f", &a);
    printf("Enter the value of b :- ");
    scanf("%f", &b);
    printf("Enter the value of c :- ");
    scanf("%f", &c);

    if((a==b) && (b==c) && (c==a)){
        printf("Equilateral triangle");
    }
    else if((a==b) || (b==c) || (c==a)){
        printf("Isoceles triangle");
    }
    else {
        printf("Scalene teriangle");
    }
    return 0;
}