#include <stdio.h>

int main() {
    
    int arr[100];
    int size;
    
    printf("enter size: ");
    scanf("%d",&size);
    
    for(int i=0; i<=size; i++){
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    
    
     for(int i=0; i<=size; i++){
        arr[i] = arr[i] * arr[i];
        printf("%d ",arr[i]);
    }
    

    return 0;
}