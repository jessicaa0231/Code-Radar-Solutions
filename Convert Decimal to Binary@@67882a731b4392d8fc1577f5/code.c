#include <stdio.h>
#include <math.h>

int main() {
    char binary[33]; 
    int decimal = 0;
    scanf("%s", binary);
    for (int i = 0; binary[i] != '\0'; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    printf(" %d", decimal);

    return 0;
}
