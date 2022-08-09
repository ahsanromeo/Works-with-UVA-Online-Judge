#include <iostream>
using namespace std;
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#define lll long long
char nums[5010];
lll primes[700];
void sieve(lll n);
int main()
{
    sieve(5010);
    lll m, n, i, j, k, t, tc, c1, c2, v;
    scanf("%lld",&t);
    for(tc=1;tc<=t;tc++)
    {
        scanf("%lld %lld",&m,&n);
        printf("Case %lld:\n",tc);
        map<lll,lll>fm;
        for(i=0;primes[i]<=m;)
        {
            if(m%primes[i]==0)
            {
                fm[primes[i]]++;
                m/=primes[i];
            }
            else
                i++;
        }
        vector<lll>cou;
        for(i=0;i<fm.size();i++)
        {
            if(fm[primes[i]])
            {
                c1=fm[primes[i]];
                v=primes[i];
                c2=0;
                for(j=2;j<=n;j++)
                {
                    k=j;
                    while(k%v==0)
                    {
                        c2++;
                        k/=v;
                    }
                }
                v=(lll)(c2/c1);
                cou.push_back(v);
            }
        }
        sort(cou.begin(),cou.end());
        if(cou[0])
            printf("%lld\n",cou[0]);
        else
            printf("Impossible to divide\n");
    }
}
void sieve(lll n)
{
    lll i, j, k, u=0;
    for(i=0;i<n;i++)
        if(nums[i]!='0')
        {
            k=i+2;
            for(j=k+k;j<n;j+=k)
                nums[j-2]='0';
            primes[u++]=k;
        }
}
