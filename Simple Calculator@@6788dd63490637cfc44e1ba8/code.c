#include<stdio.h>
int main()
{
    int x,y;
    char o;
    scanf("%d %d %c",&x,&y,&o);

    switch(o){
        case '+':
            printf("%d",x+y);
        case '-':
            printf("%d",x-y);
        case '*':
            printf("%d",x*y);
        case '/':
            printf("%d",x/y);
        default:
            printf("Error");
    }
    return 0;
}