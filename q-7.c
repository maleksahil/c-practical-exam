// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
  
  for(int i = 10; i>=6; i--){
      for(int j=10; j>=i; j--){
          printf("%d ",i*i);
      }
      printf("\n");
  }

    return 0;
}