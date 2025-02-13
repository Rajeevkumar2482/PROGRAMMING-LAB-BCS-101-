#include<stdio.h>
#include<math.h>
int main(){
    float P,R,T,SI,CI;
    int n;
    printf("Enter the value of principle amount P :- ");
    scanf("%f", &P);
    printf("Enter the value of rate interest R :- ");
    scanf("%f",&R);
    printf("Enter the value of time T :- ");
    scanf("%f", &T);
    printf("Enter the value of number of times interest is compounded per year n :- ");
    scanf("%d",&n);
    SI = (P*R*T)/100;
    CI = P * pow((1 + R / (100 * n)), n * T) - P; 

    printf("Simple interest is SI = %f\n", SI);
    printf("Compound Interest is CI = %f", CI);
    return 0;
    
}