#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a * a == b || b * b ==a) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}