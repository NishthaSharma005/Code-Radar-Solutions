#include<stdio.h>
int main()
{
    int x,y;
    char operator;
    scanf("%d %d %c",&x,&y,&o);
    switch(operator){
        case '+':
            printf("%d",x+y);
        case '-':
            printf("%d",x-y);
        case '*':
            printf("%d",x*y);
        case '/':
            printf("%d",x/y);
        default:
            printf("Error")
    }
    return 0;
}