#include <stdio.h>

int main()
{

    int arr[5] = {10,10,20,10,50};
    
		
		for(int i=0; i<5; i++) {
			for(int j=i+1; j<5; j++){
				if(arr[i] == arr[j]){
					arr[i] = 0;
				}
			}
		}
    
        for(int i=0; i<5; i++){
            if(arr[i] != 0)
            printf(" %d ",arr[i]);
        }
    return 0;
}
