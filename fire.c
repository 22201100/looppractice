#include<stdio.h>
int main()
{
    int i,n,p,c,N;
    p=0;
    c=1;
    N=p+c;
    scanf("%d",&n);
    printf("Fibonacci series: %d, %d",p,c);
    for(i=2; i<=n-1; i++)
    {
        printf(", %d",N);
        p=c;
        c=N;
        N=p+c;
    }

    return 0;
}
