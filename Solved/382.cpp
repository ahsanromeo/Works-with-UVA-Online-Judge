/*#include <iostream>
#include <stdio.h>
using namespace std;
void pro(int n);
int main()
{
    int i, j, ara[100000], n;
    printf("PERFECTION OUTPUT\n");
    for(j=0;;)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        ara[j++]=n;
    }
    for(i=0;i<j;i++)
        pro(ara[i]);
    printf("END OF OUTPUT\n");
}
void pro(int n)
{
    int k=0;
    for(int i=1;i<=1+(n/2);i++)
        if(n%i==0)
            k+=i;
    if(k==n)
            printf("%5d  PERFECT\n", n);
    else if(k<n)
        printf("%5d  DEFICIENT\n", n);
    else
        printf("%5d  ABUNDANT\n", n);
}*/
#include<stdio.h>
int main()
{
    int n,i,j,k,l,m,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)
          break;
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
               sum=sum+i;
               //printf("%d",sum);
        }
        if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
