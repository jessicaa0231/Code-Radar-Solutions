#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[50];
    scanf("%s",&a,&b);
    strcat(a,b);
    printf("%s",a);

}