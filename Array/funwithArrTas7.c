
#include<stdio.h>

int isPrime(int temp){
    int count=0;
    for(int i=2; i<=temp; i++){
        if(temp%i == 0){
            count++;
        }
    }

    if(count == 1){
        return 1;
    }else{
        return 0;
    }
}

void printPrimesInArray(int arr[], int size) {
    printf("Prime Number : ");

    for(int i=0; i<size; i++){

        int temp = isPrime(arr[i]);
        // printf("\ntemp : %d ",temp);
        if(temp == 1){
            printf(" %d ",arr[i]);
        }
    }

}

int main()
{

    int arr[] = {10,3,4,7,9,11};
    int size = sizeof(arr)/sizeof(arr[0]);

    printPrimesInArray(arr,size);
    return 0;
}
