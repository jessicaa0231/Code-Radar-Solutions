#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    
    // Check if number is 0
    if (number == 0) {
        printf("0\n");
        return 0;
    }
    
    // Calculate the lowest set bit
    int result = number & (~(number - 1));

    // Output the result
    printf("%d\n", result);

    return 0;
}
