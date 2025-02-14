#include<stdio.h>
int main()
{
    int x,y;
    char op;
    scanf("%d %d %c",&x,&y,&op);
    switch(op){
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
            if(y!=0){
            printf("%d",x/y);
            }
            else{
                printf("error");
            }
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}