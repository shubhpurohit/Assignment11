#include<stdio.h>
void nBetPrimeNo(int,int);
int main()
{
    int n1,n2;
    printf("Enter n1 & n2 ");
    scanf("%d%d",&n1,&n2);
    nBetPrimeNo(n1,n2);
    return 0;
}

void nBetPrimeNo(int n1,int n2)
{   int i;
    while(n1!=(n2+1))
    {
        for(i=2;i<n1;i++)
        {
            if((n1%i==0))
                break;
        }
        if(n1==i)
        {
            printf("%d ",i);

        }n1++;
    }
}
