#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#define ll long long
using namespace std;
int bin_sea(ll ara[], ll n, ll l, ll j);
int main()
{
    ll n, m, i, j, h1, h2, p, q;
    char s2[2];
    while(cin>>n)
    {
        ll ara[n];
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        cin>>m;
        getchar();
        gets(s2);
        if(n==2)
        {
            if(ara[0]==ara[1])
            {
                cout<<"Peter should buy books whose prices are "<<ara[0]<<" and "<<ara[1]<<"."<<endl;
            }
        }
        int f=0;
        h1=m/2;
        for(;h1>0;)
        {
            p=bin_sea(ara,h1,n,n+5);
            if(p>=0)
            {
                h2=m-h1;
                q=bin_sea(ara,h2,n,p);
                if(q>=0)
                {
                    cout<<"Peter should buy books whose prices are "<<h1<<" and "<<h2<<"."<<endl;
                    f=1;
                    break;
                }
            }
            h1--;
        }
        cout<<endl;
    }
}
int bin_sea(ll ara[], ll n, ll l, ll j)
{
    ll low=0, mid;
    ll high=l-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(n==ara[mid]&&mid!=j)
            return mid;
        else if(n>ara[mid])
            low=mid+1;
        else
            high=mid-1;
    }
    return -5;
}
