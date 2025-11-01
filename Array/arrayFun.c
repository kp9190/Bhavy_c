#include<stdio.h>

void print(int arr[],int n)
{
    for(int i=0; i<n; i++)
    printf(" %d ",arr[i]);
}

void scanArray(int num[],int n){
    for ( int i = 0; i < n; i++)
    {
        // printf("Enter array element : ");
        scanf("%d",&num[i]);
    }
}

int main(){
    int n;
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int num[n];
    int size = sizeof(num)/sizeof(num[0]);

    // printf("size : %d",size);
    scanArray(num,n);
    print(num,size);
}