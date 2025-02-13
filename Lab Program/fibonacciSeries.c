#include<stdio.h>
int main(){
    int n, a=0, b=1, c;
    printf("Enter the value of n...");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    
    }
    return 0;
}