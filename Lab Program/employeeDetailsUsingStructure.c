#include<stdio.h>

    //Defining Strkucture for Employee
    struct Employee {
        int Employee_id[50];
        char Name[50];
        char Designation[50];
        char City[50];
        float Salary;
    };
 
    int main(){
        struct Employee employees[40];
        int i;
        // taking input for 40 employee
        for(int i=0; i<40; i++){
            printf("Enter the details for employee %d :\n", i + 1 );
            printf("Employee_id : ");
            scanf("%d", &employees[i].Employee_id);
            printf("Enter name : ");
            scanf(" %[^\n]", employees[i].Name);
            printf("Enter the Designation : ");
            scanf(" %[^\n]", employees[i].Designation);
            printf("Enter the posting city : ");
            scanf(" %[^\n]", employees[i].City);
            printf("Enter the Salary : ");
            scanf("%f", &employees[i].Salary);
        }

        //print the Employee_id and Name , whose salary is grater than 50000
        printf("\nEmployees with salary more than 50000\n");
        for(int i=0; i<40; i++){
            if(employees[i].Salary > 50000 ){
                printf("Employee ID : %d , Name : %s\n", employees[i].Employee_id , employees[i].Name);
            }
        }
        return 0;
    }
    
