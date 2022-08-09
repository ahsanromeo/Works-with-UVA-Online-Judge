#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
#define lll long long int
char nums[1000000];
lll primes[78500];
void sieve(lll n);
int main()
{
    sieve(1000000);
    /*lll n, m;
    while(cin>>n>>m)
    {
        if(n>=m)
        {
            ///printf("%lld divides %lld!\n",m,n);
            cout<<m<<" divides "<<n<<"!"<<endl;
            continue;
        }

    }*/
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
