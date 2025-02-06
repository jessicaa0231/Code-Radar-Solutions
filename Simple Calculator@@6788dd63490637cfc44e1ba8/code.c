#include <stdio.h>
int main()
{
    int a,b,res;
    char op;
    scanf("%d %d %c",&a,&b,&op);
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