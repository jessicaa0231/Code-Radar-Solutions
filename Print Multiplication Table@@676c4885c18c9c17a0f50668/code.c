#include <stdio.h>
int main() {
    int i, j,n;
    scanf("%d",&n);
    for (i = n; i <= n; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }
    return 0;
}