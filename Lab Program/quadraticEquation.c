#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, root1, root2, discriminant;
    printf("Intput the cofficient of quadratic equation.\n");
    printf("Enter the value of cofficient a :- ");
    scanf("%f", &a);
    printf("Enter the value of cofficient of b :- ");
    scanf("%f", &b);
    printf("Enter the value of cofficient of c :- ");
    scanf("%f", &c);

    discriminant = pow(b,2) - (4 * a * c);

    if(discriminant > 0){
        root1 = ((-b + sqrt(discriminant)) / (2 * a));
        root2 = ((-b - sqrt(discriminant)) / (2 * a));

        printf("Roots are real and distinct:\n");
        printf("root1 = %f root2 = %f", root1, root2);
    }
    else if(discriminant == 0){
        root1 = root2 = -b / (2 * a);
        
        printf("Both rooots are same .");

        printf("root1 = %f root2 = %f", root1, root2);
    }
    else {
        printf("Roots are imaginary.");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("root1 = %f root2 = %f", root1, root2);

    }
    return 0;

}