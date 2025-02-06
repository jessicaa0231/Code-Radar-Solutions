#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char binary[33];
    int decimal = 0;
    scanf("%s", binary);
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
      
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    printf(" %d\n", decimal);

    return 0;
}
