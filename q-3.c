#include <stdio.h>

int reverseNumber(int num);

int main() {
    
    int number, reversed;
    
    printf("Enter a 3-digit number: ");
    scanf("%d",&number);
    
    reversed = reverseNumber(number);
    
    printf("Reversed number: %d\n", reversed);
    return 0;
}

int reverseNumber(int num){
    
    int hundreds, tens, units;
    
    hundreds = num /100;
    tens = (num / 10) % 10;
    units = num % 10;
    
    int reversed = units*100 + tens*10 + hundreds;
    
    return reversed;
}