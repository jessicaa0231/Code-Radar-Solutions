#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, sizeof(a), stdin);
    printf("%lu",strlen(a));
    return 0;

}
