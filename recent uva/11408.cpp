#include <iostream>
using namespace std;
#define ll long long
char nums[5000000];
ll primes[348516];
//ll index[]
void sieve(ll n);
int isp(ll n);
int main()
{
    sieve(5000000);
    ll a, b, c, i, j, k, l, n, sum;
    while(cin>>a>>b)
    {
        c=0;
        for(k=a; k<=b; k++)
        {
            sum=0;
            for(i=0;primes[i]<=k;i++)
            {
                if(k%primes[i]==0)
                {
                    //cout<<primes[i]<<" ";
                    sum+=primes[i];
                }
            }
            if(isp(sum))
                c++;
                //cout<<"dePrime"<<endl;
            //else
                //cout<<"no"<<endl;
        }
        cout<<c<<endl;
    }
}
void sieve(ll n)
{
    ll i, j, k, u=0;
    for(i=0; i<n; i++)
    {
        if(nums[i]!='0')
        {
            k=i+2;
            for(j=k+k; j<n; j+=k)
                nums[j-2]='0';
            primes[u++]=k;

        }
    }
    //cout<<u<<endl;
}
int isp(ll n)
{
    if(n==0||n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(ll i=3; i*i<=n; i+=2)
        if(n%i==0)
            return 0;
    return 1;
}
