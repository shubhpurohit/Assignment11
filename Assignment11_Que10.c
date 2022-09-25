#include<stdio.h>
int fact(int);

int main()
{
    int n,series=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        series=series+(fact(i)/i);

    }
    printf("%d",series);
    return 0;
}

int fact(int n)
{
    int f=1;
    while(n>0)
    {
        f*=n;
        n--;
    }
    return f;
}
