#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    z = x>>y;
    printf("%d",z);
    return 0;
}