#include <stdio.h>

int main(){

    int n, i,j,val;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("Enter the array elements: ");

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 1; i < n; i++){
        int val = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>val)
        {
            arr[j+1] = arr[j];
            j--;
        }

         if(i != (j+1)){
            arr[j+1] = val;
    }
        
    }

   

    printf("After sorting elements are: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    

    return 0;
}