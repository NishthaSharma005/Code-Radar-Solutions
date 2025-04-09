#include<stdio.h>
int main()
{
    int n,i,j,space;
    scanf("%d",&n);
    for(space=1;space<=n-i;space++){
        printf(" ");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}