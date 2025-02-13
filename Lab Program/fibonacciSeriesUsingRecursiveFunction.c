#include<stdio.h>
void fib(int a, int b, int n);
int main(){
    int N, a=0, b=1;
    printf("Input last term : ");
    scanf("%d", &N);
    printf("%d \t %d", a, b);
    fib(a, b, N-2);
    return 0;
}

#include<stdio.h>
void fib(int a, int b, int n) {
    int s;
    if(n>0){
        s = a + b;
        printf("\t %d", s);
        a = b;
        b = s;
        fib(a, b, n-1);
    }
}