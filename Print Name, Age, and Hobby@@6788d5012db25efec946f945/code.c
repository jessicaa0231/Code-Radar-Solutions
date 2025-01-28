#include <stdio.h>
int main()
{
    int age;
    char name,hobby [100];
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&hobby);

    printf("Name: Age: Hobby: %s\n%d\n%s",name,age,hobby);

    return 0;
}