#include <stdio.h>
#include <iostream>
using namespace std;
#define llld long long int
char primes[1000000];
llld pri[78499];
void seive(int n);
int main()
{
    seive(1000000);
    llld i, n, j, k;
    int f, high, low, mid;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
            break;
        f=0;
        for(i=0;pri[i]<n;i++)
        {
            j=n-pri[i];
            high=78498;
            low=0;
            for(;;)
            {
                if(low>high)
                    break;
                mid=(high+low)/2;
                if(pri[mid]==j)
                {
                    printf("%lld:\n%lld+%lld\n", n, pri[i], pri[mid]);
                    f=1;
                    break;
                }
                if(j>pri[mid])
                    low=mid+1;
                else
                    high=mid-1;
            }
            if(f==1)
                break;
        }
        if(f==0)
            printf("%lld:\nNO WAY!\n", n);
    }
}
void seive(int n)
{
    int i, j, k, u=0;
    for(i=0;i<n;i++)
    {
        if(primes[i]!='0')
        {
            k=n/(i+2);
            for(j=2;j<=k;j++)
                primes[j*(i+2)-2]='0';
        }
        if(primes[i]!='0')
            pri[u++]=i+2;
    }
}
