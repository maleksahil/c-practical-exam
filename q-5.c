#include <stdio.h>

struct House{
    int room_quantity;
    int establish_year;
    char city[50];
};

int main() {
    int max_houses = 100;
    struct House houses[max_houses];
    int i, N;
    
    printf("enter number of houses: ");
    scanf("%d", &N);
    
    for(i=0; i<N; i++){
        
        printf("\nHouse %d: \n", i +1);
        
        printf("enter number of rooms: ");
        scanf("%d", &houses[i].room_quantity);
        
        printf("Enter establish year: ");
        scanf("%d",&houses[i].establish_year);
        
        printf("enter city: ");
        scanf("%s", houses[i].city);
        
    }
    
    printf("\nDetails of all houses: \n");
    
    for(i = 0; i < N; i++) {
        printf("\nHouses %d\n", i + 1);
        printf("Number of rooms: %d\n", houses[i].room_quantity);
        printf("Establishment year: %d\n",houses[i].establish_year);
        printf("city: %s\n", houses[i].city);
    }
    

    return 0;
}