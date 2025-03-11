#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=10;j++){
            printf("%dX%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}