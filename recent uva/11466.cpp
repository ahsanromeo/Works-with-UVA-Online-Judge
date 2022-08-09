#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long lng;
char nums[10000000];
lng primes[664582];
lng bin_sea(lng n);
void sieve(lng n);
int main()
{
    sieve(10000002);
    lng i, n, half, p1, p2, nh;
    while(cin>>n)
    {
        //cout<<nums[n]<<endl;
        half=n/2;
        int f=1;
        for(i=2;i<=half;++i)
        {
            if(n%i==0)
            {
                nh=n/i;
                if(nums[nh]=='1')
                {
                    cout<<nh<<endl;
                    f=0;
                    break;
                }
            }
        }
        if(f==1)
            cout<<-1<<endl;
    }
}
void sieve(lng n)
{
    lng i, j, k, u=0;
    nums[0]='0';
    nums[1]='0';
    for(i=2;i<n;++i)
    {
        if(nums[i]!='0')
        {
            nums[i]='1';
            for(j=i+i;j<n;j+=i)
                nums[j]='0';
            primes[u++]=i;
        }
    }
    primes[0]=2;
    //cout<<u<<endl;
}
lng bin_sea(lng n)
{
    lng low=0, high=664579, mid;
    for(;;)
    {
        if(low>high)
            return -2;
        mid=(low+high)/2;
        if(primes[mid]==n)
            return mid;
        if(n>primes[mid])
            low=mid+1;
        else
            high=mid-1;
    }
}


/*half=n/2;
        for(;;)
        {
            p1=bin_sea(n);
            if(p1>=0)
            {
                if(n%)
            }
        }*/
