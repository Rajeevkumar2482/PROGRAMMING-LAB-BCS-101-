#include<stdio.h>
int main(){
    float a, b, c;
    int N;
    printf("Enter the value of a :- ");
    scanf("%f", &a);
    printf("Enter the value of b :- ");
    scanf("%f", &b);
    printf("For addition press 1 :\n");
    printf("For subtraction press 2 :\n");
    printf("For multiply press 3 :\n");
    printf("For divide press 4 :\n");
    
    scanf("%d", &N);

    switch (N) {
        case 1 : c = a + b;
            printf("%f", c);
            break;
        case 2 : c = a - b;
            printf("%f", c);
            break;
        case 3 : c = a * b;
            printf("%f", c);
            break;
        case 4 : c = a / b;
            printf("%f", c);
            break;
        
        default: printf("You entered wrong deatails.");
    }
    return 0;
}