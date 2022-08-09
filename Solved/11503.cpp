///uva 11503

#include <iostream>
#include <cstdio>
#include <map>
using namespace std;
typedef long long lng;
#define getint(x) scanf("%d", &x)
#define getlng(x) scanf("%lld", &x)
lng par[1000010];
lng sz[1000010];
lng find(lng r)
{
    if(par[r] == r)
        return r;
    return par[r] = find(par[r]);
}
void join(lng a, lng b)
{
    lng u = find(a);
    lng v = find(b);
    if(u == v)
    {
        printf("%lld\n", sz[v]);
        return;
    }
    par[u] = v;
    sz[v] += sz[u];
    printf("%lld\n", sz[v]);
}
int main()
{
    int T;
    getint(T);
    while(T--)
    {
        map<string, int>mp2;
        map<string, lng>mp;
        lng F;
        getlng(F);
        string A, B;
        lng tr = 0;
        while(F--)
        {
            cin >> A >> B;
            if(mp2[A] == 0)
            {
                mp2[A] = 1;
                mp[A] = tr;
                par[tr] = tr;
                sz[tr] = 1;
                tr++;
            }
            if(mp2[B] == 0)
            {
                mp2[B] = 1;
                mp[B] = tr;
                par[tr] = tr;
                sz[tr] = 1;
                tr++;
            }
            join(mp[A], mp[B]);
        }
    }
    return 0;
}
