#include<stdio.h>
int main()
{
    float x,y;
    char o;
    scanf("%f %f",&x,&y);
    scanf("%c",&o);
    switch(o){
        case '+':
            printf("%f",x+y);
            break;
        case '-':
            printf("%f",x-y);
            break;
        case '*':
            printf("%f",x*y);
            break;
        case '/':
            printf("%f",x/y);
            break;
        default:
            printf("Error");
            break;
    }
    return 0;
}