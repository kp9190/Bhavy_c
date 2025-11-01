#include <stdio.h>

int main()
{
    //          0 1 2 3 4
    int arr[5] = {3, 2, 1, 5, 4};

    printf("Befor : ");
    for (int i = 0; i < 5; i++)
        printf(" %d ", arr[i]);

    for (int i = 0; i < 5; i++)
    {

        for (int j = i; j < 5; j++)
        {
            if (arr[j] < arr[i])
            { // 3 < 2
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nAfter : ");
    for (int i = 0; i < 5; i++)
        printf(" %d ", arr[i]);

    return 0;
}
