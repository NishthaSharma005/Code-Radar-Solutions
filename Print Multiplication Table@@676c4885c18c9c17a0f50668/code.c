#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=10;j++){  
            printf("%d X %d = %d\n",n,j,n*j);
        }
        
    }
    return 0;
}