#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
#define lng long long
char nums[1000050];
lng primes[78501];
void sieve();
lng bin_sea(lng n);
int main()
{
    sieve();
    lng n, i, u, l, d, mx, sec, st, t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&u,&l);
        if(u==l&&nums[u]=='0'&&nums[l]=='0')
        {
            printf("No jumping champion\n");
            continue;
        }
        if(u>l)
        {
            i=u;
            u=l;
            l=i;
        }
        if(u==0&&l==1)
        {
            printf("No jumping champion\n");
            continue;
        }
        for(i=u;;i++)
            if(nums[i]=='1')
            {
                u=i;
                break;
            }
        for(i=l;;i--)
            if(nums[i]=='1')
            {
                l=i;
                break;
            }
        u=bin_sea(u);
        l=bin_sea(l);
        if(u==l)
        {
            printf("No jumping champion\n");
            continue;
        }
        map<lng,lng>vj;
        for(i=u+1;i<=l;i++)
        {
            d=primes[i]-primes[i-1];
            vj[d]++;
        }
        mx=-2;
        for(i=0;i<vj.size();++i)
            if(vj[i]>=mx)
            {
                mx=vj[i];
                st=i;
            }
        mx=-2;
        for(i=vj.size()-1;i>=0;--i)
            if(vj[i]>=mx)
            {
                mx=vj[i];
                sec=i;
            }
        if(st==sec)
            printf("The jumping champion is %lld\n",st);
        else
            printf("No jumping champion\n");
    }
}
void sieve()
{
    lng i, j, u=0;
    nums[0]='0';
    nums[1]='0';
    for(i=2;i<1000002;i++)
    {
        if(nums[i]!='0')
        {
            nums[i]='1';
            primes[u++]=i;
            for(j=i+i;j<1000002;j+=i)
                nums[j]='0';
        }
    }
}
lng bin_sea(lng n)
{
    lng mid, low=0, high=78498;
    for(;;)
    {
        if(low>high)
            return -1;
        mid=(low+high)/2;
        if(n==primes[mid])
            return mid;
        if(n>primes[mid])
            low=mid+1;
        else
            high=mid-1;
    }
}
