#include <iostream>
using namespace std;
#define lld long long int
lld comb(int n, int h);
lld fact(int n);
int main()
{
    int n, h;
    while(cin>>n>>h) cout<<comb(n,h)<<endl;
}
lld fact(int n)
{
    lld i, r=1;
    for(i=2;i<=n;i++) r=r*i;
    return r;
}
lld comb(int n, int h)
{
    lld r;
    r=fact(n)/(fact(n-h)*fact(h));
    return r;
}
