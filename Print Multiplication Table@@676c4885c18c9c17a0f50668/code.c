#include <stdio.h>
int main() {
    int i, j,n;
    scanf("%d",&n);
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }
    return 0;
}