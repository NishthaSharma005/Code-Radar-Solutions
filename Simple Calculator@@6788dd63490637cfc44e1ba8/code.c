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
            break;
        case '*':
            printf("%d",x*y);
            break;
        case '/':
            printf("%d",x/y);
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}