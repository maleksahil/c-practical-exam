#include <stdio.h>

int main() {
    
    int number;
    
    printf("enter any number: ");
    scanf("%d",&number);
    
    switch (number>0){
        case 1:
        printf("The number is positive.\n");
        break;
        
        case 0:
        printf("The number is negative.\n");
        break;
    }
    
    
    return 0;

    
}