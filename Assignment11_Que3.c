#include<stdio.h>
int primeNo(int);

int main()
{
    int n,m;
    printf("Enter an number to check if its prime or not ");
    scanf("%d",&n);
    m=primeNo(n);
    if(m==1)
        printf("The number is prime");
    else
        printf("Not prime");
    return 0;
}

int primeNo(int n)
{ int yes=1;
 for(int i=2;i<=n/2;i++)
    {
        if((n%i)==0)
        {
            yes=0;

        }
    }

    if(yes==1)
        return 1;

    else
        return 0;
}


