#include<stdio.h>
int main(){
    int item, i=0;
    int arr[5] = {23, 45, 56, 67, 12};
    printf("Enter the searching item :- ");
    scanf("%d", &item);

    while(i<5){
        if(arr[i] == item){
            printf("Item found at index :-  %d", i);
            return 0;
        }
        i++;
    }
    if(i>=5){
        printf("Item Not found");
        return 0;
    }
}