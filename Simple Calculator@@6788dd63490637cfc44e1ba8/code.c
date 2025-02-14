#include<stdio.h>
int main()
{
    int x,y;
    char o;
    scanf("%d %d",&x,&y);
    scanf("%c",&o);
    switch(o){
        case '+':
            printf("%d",x+y);
            break;
        case '-':
            printf("%d",x-y);
        case '*':
            printf("%d",x*y);
            break;
        case '/':
            printf("%d",x/y);
        default:
            printf("Error");
    }
    return 0;
}