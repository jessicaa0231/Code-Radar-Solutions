#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if (number ==0){
        printf("0/n");
        return 0;
    }
    int result = number & (~(number - 1));

    printf("%d", result);

    return 0;
}
