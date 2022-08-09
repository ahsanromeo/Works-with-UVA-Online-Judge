#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
#define lll long long int
char nums[1000000];
vector<lll>primes;
void sieve(lll n);
int main()
{
    sieve(1000000);
    lll n, i, j, k, c;
    while(scanf("%lld",&n))
    {
        map<lll,lll>fn;
        c=0;
        for(j=2;j<=n;j++)
        {
            k=j;
            for(i=0;primes[i]<=k;)
            {
                if(k%primes[i]==0)
                {
                    //fn[primes[i]]++;
                    c++;
                    k/=primes[i];
                }
                else
                    i++;
            }
        }
        cout<<c<<endl;
    }
}
void sieve(lll n)
{
    lll i, j, k;
    for(i=0;i<n;i++)
        if(nums[i]!='0')
        {
            k=i+2;
            for(j=k+k;j<n;j+=k)
                nums[j-2]='0';
            primes.push_back(k);
        }
}
