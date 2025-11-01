#include<stdio.h>


int main(){

    int arr[5] = {6,7,9,10,13};
    int sum=0,j=4;
    int arr1[5];

    // sum of Array
    for(int i=0; i<5; i++){
        // printf("%d ",arr[i]);
        sum = sum +arr[i];
    }
    printf("sum : %d",sum);


    //reves 

    // printf("\nrev : ");
    // for(int i=4; i>=0; i--){
    //     printf("%d ",arr[i]);
    // }
    
    printf("\nrev : ");
    for(int i=0; i<5; i++){
        arr1[j--] = arr[i];
    }

    for(int i=0; i<5; i++){
        printf(" %d ",arr1[i]);
    }
    

    return 0;
}