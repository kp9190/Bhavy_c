#include<stdio.h>
int main(){
    int arr[5] = { 2 ,5 ,2 ,4 , 5};
    int arr1[5];
   
    for(int i=0; i<5 ; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i] == arr[j]){
                arr[j] =0;
            }
        }
    }
    for(int i=0; i<5; i++){
        if(arr[i] == 0){
        }else{
            printf(" %d ",arr[i]);
        }
    }
    return 0;
}