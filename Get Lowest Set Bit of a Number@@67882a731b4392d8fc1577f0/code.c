#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int result = number & (~(number - 1));

    printf("%d", result);

    return 0;
}
