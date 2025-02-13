#include<stdio.h>
int main(){
    int arr[5] = {23, 45, 56, 67, 78};
    int lowervalue=0, uppervalue=5, found=0, item, mid;
    printf("Enter the seaching item :- ");
    scanf("%d", &item);

    while(lowervalue <= uppervalue) {
        mid = (lowervalue + uppervalue) / 2;
        if(arr[mid] == item){
            found = 1;
            break;
        }
        if(arr[mid] < item){
            lowervalue = mid + 1;
        }
        else {
            uppervalue = mid - 1;
        }
    }
    if(found==1) {
        printf("Item found at index : %d", mid);
    } 
    else {
        printf("Item not found.");
    }
    return 0;
}