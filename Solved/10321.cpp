#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long lng;
bool cmp(lng a, lng b);
int m;
int main()
{
    int n;
    while(scanf("%d %d", &n, &m)==2)
    {
        printf("%d %d\n", n, m);
        if(n==0&&m==0)
            break;
        vector<lng>v;
        lng in;
        for(int i=0;i<n;++i)
        {
            scanf("%lld", &in);
            v.push_back(in);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;++i)
            printf("%lld\n", v[i]);
    }
    return 0;
}
bool cmp(lng a, lng b)
{
    lng ma=a%m;
    lng mb=b%m;
    int av=a%2;
    int bv=b%2;
    if(ma==mb)
    {
        if(av==0&&bv==0)
            return a<b;
        else if(av!=0&&bv!=0)
            return a>b;
        else
        {
            if(av==0)
                return false;
            else
                return true;
        }
    }
    else
        return ma<mb;
}
