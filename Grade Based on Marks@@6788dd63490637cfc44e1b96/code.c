#include <stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if (marks >=90){
        printf("A")
    }
    else if (marks >=80 && <90){
        printf("B")
    }
    else if (marks >=70 && <80){
        printf("C")
    }
    else if (marks >=60 && <70){
        printf("D")
    }
    else if (marks <60){
        printf("F");
    }
    else {
        printf("invalid");
    }
}