#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
int primes[28];
void sieve();
int main()
{
    sieve();
    int n, i, j, k;
    while(scanf("%d",&n)&&n)
    {
        printf("%3d! =",n);
        map<int,int>mp;
        for(i=2;i<=n;i++)
        {
            k=i;
            for(j=0;primes[j]<=k;)
            {
                if(k%primes[j]==0)
                {
                    mp[j]++;
                    k/=primes[j];
                }
                else
                    j++;
            }
        }
        k=mp.size();
        if(k<=15)
        {
            for(i=0;i<k;i++)
                printf("%3d",mp[i]);
            printf("\n");
        }
        else
        {
            for(i=0;i<15;i++)
                printf("%3d",mp[i]);
            printf("\n      ");
            for(i=15;i<k;i++)
                printf("%3d",mp[i]);
            printf("\n");
        }
    }
}
void sieve()
{
    int i, j, k, u=0;
    char nums[102];
    for(i=0;i<101;i++)
        if(nums[i]!='0')
        {
            k=i+2;
            for(j=k+k;j<101;j+=k)
                nums[j-2]='0';
            primes[u++]=k;
        }
}
