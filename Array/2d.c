#include<stdio.h>

int main(){


    /*
      0 1 2 3 ...     8 
    { 1 2 3 4 5 6 7 8 9 } 1x9



      0 1 2
0    |1 2 3|
1    |4 5 6| => 3(row) x 3(columns) 
2    |7 8 9|

  
    00 01 02
    10 11 12
    20 21 22


    arr[0] = 10;

    arr[0][0] =10; 
    
    arr[row][columns] = { {} , {}, {}}
    
    */

    // How to Creat 2D Arrray 
    int arr1[3][3] ={{1 , 2, 3 }, {1, 2, 3}, {1, 2, 3}}; 
    int arr2[2][2] ={{1 , 2}, { 3, 4}};
    int arr3[2][3];
    
    for(int i=0; i<2; i++){
        for (int j = 0; j < 3; j++)
        {
            printf("Enter array Element : ");
            scanf("%d",&arr3[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ",arr3[i][j]);
        }
        printf("\n");
    }


    return 0; 

}