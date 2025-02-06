#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if (number & (1 << 31)) {
        printf("Set"); 
    } else {
        printf("Not"); 
    }

    return 0;
}
