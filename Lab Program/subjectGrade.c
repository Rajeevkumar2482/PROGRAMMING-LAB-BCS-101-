#include<stdio.h>
int main(){
    float Eng, Maths, Phy, Chem, Hindi;
    float percentage,obtainedmarks, per;
    int Totalmarks = 500;
    printf("Enter the marks of Eng :- ");
    scanf("%f", &Eng);
    printf("Enter the marks of Maths :- ");
    scanf("%f", &Maths);
    printf("Enter the marks of Phy :- ");
    scanf("%f", &Phy);
    printf("Enter the marks of chem :- ");
    scanf("%f", &Chem);
    printf("Enter the marks of Hindi :- ");
    scanf("%f", &Hindi);
    //percentage calculation

    obtainedmarks = Eng + Maths + Phy + Chem + Hindi;
    percentage = (obtainedmarks / Totalmarks) * 100;
    
    printf("Total percentege = %f\n", percentage);

    // garade
    per = percentage;
    if(per>=90 && per<=100){
        printf("Grade 'A' ");
    }
    else if(per>=80 && per<90){
        printf("Grade 'B' ");
    }
    else if(per>=60 && per<80){
        printf("Grade 'C' ");
    } 
    else {
        printf("Grade 'D' ");
    }
    return 0;
}