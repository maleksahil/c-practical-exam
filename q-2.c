#include <stdio.h>

int main() {
    
    int arr[100];
    int n,i;
    int smallest;
    
    printf("Enter number or element: ");
    scanf("%d",&n);
    
    printf("Enter %d integers: \n",n);
    for (i-0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    smallest = arr[0];
    
    for(i = 1; i< n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    
    printf("smallest element in the array is: %d\n",smallest);

    return 0;
}