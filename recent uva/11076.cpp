#include <iostream>
using namespace std;
#include <stdio.h>
#include <fstream>
#include <string.h>
#include <algorithm>
#define ll unsigned long long int
#define cout rumon
long long sumgen(ll ara[], ll n);
int main()
{
    ofstream rumon("11076out.txt");
    ll n, ins, i;
    while(cin>>n&&n)
    {
        ll num[n];
        for(i=0; i<n; i++)
            cin>>num[i];
        sort(num,num+n);
        ll sum=0;
        do
        {
            //sum+=sumgen(num,n);
            for(i=0;i<n;i++)
                cout<<num[i];
            cout<<endl;
        }
        while(next_permutation(num,num+n));
        cout<<endl;
        //cout<<sum<<endl;
    }
}
long long sumgen(ll ara[], ll n)
{

    long long i, j, sum=0;
    for(i=n-1,j=1; i>=0; i--,j*=10)
        sum+=(ara[i]*j);
    return sum;
}
