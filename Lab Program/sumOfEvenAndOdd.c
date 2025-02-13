#include<stdio.h>
int main(){
    int N, sumeven=0, sumodd=0;
    printf("Enter the value of N :-");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        if(i % 2 == 0){
            sumeven += i;
        } else {
            sumodd += i;
        }
    }
    printf("The Total sum of even number = %d\n", sumeven);
    printf("The total sum of odd number =%d", sumodd);
    return 0;
}