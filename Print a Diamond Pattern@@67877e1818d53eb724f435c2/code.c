#include <stdio.h>
int main ()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++){

        for (i=1;i<=n; i++){
            printf(" ");
        }
        for (j=1;j<=n-1;j++){
            printf("*");
        }
        for (j=1;j<=n-1;j++){
            printf("*");
        }
        printf("\n");

    }
}