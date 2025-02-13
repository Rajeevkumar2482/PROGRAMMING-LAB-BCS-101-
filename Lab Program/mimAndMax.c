#include<stdio.h>
int main(){
    int arr[] = {12, 34, 56, 2, 45, 56, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];

    for(int i=1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
           
    }
    printf("Minimum element is : %d\n", min);
    printf("Maximum element is : %d\n", max);
   
    return 0;
}