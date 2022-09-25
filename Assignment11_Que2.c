#include<stdio.h>
int hcfOfTwoNum(int,int);
int main()
{
    int n1,n2,x;
    printf("Enter the value of n1 & n2 ");
    scanf("%d%d",&n1,&n2);
    x=hcfOfTwoNum(n1,n2);
    if(x!=0)
    {
        printf("HCF is %d ",x);
    }
    else
    {
        printf("No HCF found");
    }
    return 0;
}

int hcfOfTwoNum(int n1,int n2)
{
    int i,HCF,min=n1<n2?n1:n2;
    for(i=1;i<=min;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            HCF=i;
        }
    }
    if(HCF!=0)
    {
        return HCF;
    }
    else
    {
        return 0;
    }
}
