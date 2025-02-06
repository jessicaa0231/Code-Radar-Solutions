#include <stdio.h>
int main()
{

    char A,B,C,D,F;
    switch(A,B,C,D,F)
    {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade");
            break;
    }
}