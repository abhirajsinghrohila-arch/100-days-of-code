//Q31: Print the binary representation of a given number.
#include <stdio.h>

int main() {
    int num, temp, binary = 0, place = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    temp = num;
    
        
    while (temp > 0) {
        binary = binary + (temp % 2) * place;
        temp = temp / 2;
        place = place * 10;
    }
    
    printf("Binary representation of %d is: %d\n", num, binary);
    
    return 0;
}
