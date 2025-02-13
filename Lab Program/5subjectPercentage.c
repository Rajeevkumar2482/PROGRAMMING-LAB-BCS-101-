#include<stdio.h>
int main(){
    int a, b, c, d, e;
    float per, obtained;
    int marksMaximum  = 500;
    printf("Enter the first subject marks a :- ");
    scanf("%d", &a);
    printf("Enter the sencond subject marks b :- ");
    scanf("%d", &b);
    printf("Enter the third subject marks c :- ");
    scanf("%d", &c);
    printf("Ener the fourth subject marks d :- ");
    scanf("%d", &d);
    printf("Enter the fifth subject marks e :- ");
    scanf("%d", &e);
    obtained = a + b + c + d + e;
    per = (obtained / marksMaximum) * 100;
    printf("Total percentage = %f", per);
    return 0;
}