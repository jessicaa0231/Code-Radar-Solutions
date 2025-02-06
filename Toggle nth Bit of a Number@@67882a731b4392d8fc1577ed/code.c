#include <stdio.h>

int getNthBit(int number, int n) {
    return number & ^(1 <<n); 
}

int main() {
    int number, n;
    scanf("%d", &number);
    scanf("%d", &n);
    int bitValue = getNthBit(number, n);
    printf("%d", bitValue);

    return 0;
}
