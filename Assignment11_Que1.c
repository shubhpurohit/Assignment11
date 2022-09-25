#include<stdio.h>
int LcmOfTwoNum(int,int);
int main()
{
    int n1,n2,LCM;
    printf("Enter number 1 ");
    scanf("%d",&n1);
    printf("Enter number 2 ");
    scanf("%d",&n2);
    LCM=LcmOfTwoNum(n1,n2);
    printf("LCM is %d",LCM);
    return 0;
}
int LcmOfTwoNum(int x,int y)
{
    int max=x>y?x:y;
    while(1)
    {


    if(max%x==0&&max%y==0)
    {
        return max;
        break;
    }
    max++;
}
}
