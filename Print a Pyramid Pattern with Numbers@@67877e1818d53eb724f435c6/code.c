#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int space=1;space<=n-i;space++){
        printf(" ");
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j++){
            prinf("%d",j);
        }
    }
    return 0;
}