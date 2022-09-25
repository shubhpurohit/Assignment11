#include<stdio.h>
void nPrimeNo(int);
int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    nPrimeNo(n);
    return 0;
}

void nPrimeNo(int n)
{
    int count=0,i,j=2;
    while(count<n)
    {
        for(i=2;i<=j;i++)
        {
            if(j%i==0)
                break;
        }
        if(i==j)
        {
            printf("%d ",j);
            count++;

        }j++;
    }
}
