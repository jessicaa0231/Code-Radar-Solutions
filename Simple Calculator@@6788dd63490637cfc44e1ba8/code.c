#include <stdio.h>
int main()
{
    int a,b,res;
    char op;
    scanf("%d %d %c %d",&a,&b,&op);
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
            
        if (b==0){
            printf("error");
            break;
        }
        else {
            printf("%d",a/b);
        }
            break;
        default:
            printf("error");
            break;
    }
    printf("%d",res);

}