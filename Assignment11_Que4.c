#include<stdio.h>
int nextPrime(int);
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    n++;
    printf("The next prime is %d",nextPrime(n));
    return 0;
}
 int nextPrime(int n)
 { int j;
    while(n)
    {
        for(j=2;j<=n;j++)
        {
            if(n%j==0)
            {
                break;
            }

        }
    if(n==j)
        {   return n;
             break;
        }
         n++;

    }
}
