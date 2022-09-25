#include<stdio.h>
void fibonnaci(int);

int main()
{
    int n;
    printf("Enter an value n ");
    scanf("%d",&n);
    fibonnaci(n);
    return 0;
}

void fibonnaci(int n)
{
    int a=-1,b=1,fib=0;
    for(int i=1;i<=n;i++)
    {
        fib=a+b;
        printf("%d ",fib);
        a=b;
        b=fib;
    }

}
