#include<stdio.h>
int main()
{
    int n,i,j,space;
    scanf("%d",&n);
    for(space=1;space<=n-i;space++){
        printf(" ");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=2*i-1;j++){
            prinf("%d",j);
        }
    }
    return 0;
}