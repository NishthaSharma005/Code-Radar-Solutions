#include<stdio.h>
int main()
{
    int x,y;
    char op;
    scanf("%d %d %c",&x,&y,&op);
    switch(op){
        case '+':
            printf("%d\n",x+y);
            break;
        case '-':
            printf("%d",x-y);
            break;
        case '*':
            printf("%d\n",x*y);
            break;
        case '/':
            if(y!=0){
            printf("%d\n",x/y);
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