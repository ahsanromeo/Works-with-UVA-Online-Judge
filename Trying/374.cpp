#include <iostream>
#include <cstdio>
using namespace std;
typedef long long lng;
int m;
int mod(lng a, lng b)
{
    if(b==0)
        return 1;
    if(b%2==0)
        return (mod(a,b/2)*mod(a,b/2))%m;
    return (mod(a,b-1)*(a%m))%m;
}
int main()
{
    lng a, b;
    m = 100;
    while(cin>>a>>b)
    {
        int ab = mod(a,b);
        if(ab<10)
            cout<<"0";
        cout<<ab<<"\n";
    }
    return 0;
}
