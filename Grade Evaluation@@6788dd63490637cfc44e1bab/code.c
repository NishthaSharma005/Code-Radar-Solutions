#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    switch(n){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D'
            printf("Below Average");
            break;
        case 'E'
            printf("Fail");
            break;
    }
    return 0;
}