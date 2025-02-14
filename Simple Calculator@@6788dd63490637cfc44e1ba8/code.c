#include<stdio.h>
int main()
{
    float x,y;
    char op;
    scanf("%f %f %c",&x,&y,&op);
    switch(op){
        case '+':
            printf("%.0f\n",x+y);
            break;
        case '-':
            printf("%.0f\n",x-y);
            break;
        case '*':
            printf("%.0f\n",x*y);
            break;
        case '/':
            printf("%.0f\n",x/y);
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}