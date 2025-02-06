#include <stdio.h>

int lowestBit(int number) {
    return number & (~(number - 1));
}

int main() {
    int number;
   
    scanf("%d", &number);

    int result = lowestBit(number);
    printf("%d", result);

    return 0;
}
