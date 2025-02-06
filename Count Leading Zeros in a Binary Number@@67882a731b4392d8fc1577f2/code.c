#include <stdio.h>

int main() {
    int number, count = 0;
    scanf("%d", &number);
    while (number != 0 && (number >> 31) == 0) {
        count++;               
        number <<= 1;         
    }
    printf("%d\n", count); 
    return 0;
}
