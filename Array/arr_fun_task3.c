// 3. Find Frequency of Each Digit in Array
// Function: void digitFrequency(int arr[], int size);
// Input: {1, 3, 2, 3, 1, 3, 2}
// Output:
// Digit 1: 2 times
// Digit 2: 2 times
// Digit 3: 3 times



#include<stdio.h>


void digitFrequency(int arr[], int size){
    int frec[10]={0};

    // Count frec

    for(int i=0; i<size; i++){
        frec[arr[i]]++;//        1 2 3 
    }
    
    for (int i = 0; i < size; i++) {
        if (frec[i] > 0) {
            printf("Digit %d: %d times\n", i, frec[i]);
        }
    }
}

int main(){
    int arr[] = {1, 3, 2, 3, 1, 3, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    digitFrequency(arr, size); // aggruments


    return 0;
}

