#include<stdio.h>
int main()
{
    int x,a;
    scanf("%d",&x);
    a=x>>31
    if(a & 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}