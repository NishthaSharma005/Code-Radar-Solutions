#include<stdio.h>
void fibonacciSeries(int n){
    static int n1=0,n2=1,n3;
    if(n>0){
    n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("%d",n3);
    fibonacci(n-1);
}
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
    }
    printf("0 1");
    fibonacci(n-2);
    getch();
    return 0;
}