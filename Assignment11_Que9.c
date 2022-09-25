#include<stdio.h>
void square(int);
main()
{
    int n;
    scanf("%d",&n);
    square(n);
}

void square(int n)
{
    int sq=n*n;
    printf("%d",sq);
}
