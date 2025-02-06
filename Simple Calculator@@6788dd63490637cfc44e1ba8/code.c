#include <stdio.h>
int main()
{
    int a,b,res;
    char op;
    scanf("%d %d %c %d",&a,&b,&op,&res);
    switch(op)
    {
        case '+':
            res = a+b;
            break;
        case '-':
            res = a-b;
            break;
        case '*':
            res = a*b;
            break;
        case '/':
            res = a/b;
            break;
        default:
            printf("Error");
            break;
    }
    printf("%d",res);

}