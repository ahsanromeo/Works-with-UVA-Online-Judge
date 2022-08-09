#include <iostream>
#include <cstdio>
#include <set>
#include <cstring>
using namespace std;
bool lol[5005];
bool ok(int n)
{
    set<int>cs;
    int len=0;
    while(n!=0)
    {
        cs.insert(n%10);
        n/=10;
        ++len;
    }
    return len==cs.size();
}
int main()
{
    memset(lol,false,sizeof(lol));
    for(int i=1; i<=5000; ++i)
        if(ok(i))
            lol[i]=true;
    int m, n;
    while(scanf("%d %d", &m, &n)==2)
    {
        if(m>n)
            swap(m,n);
        int k=0;
        for(int i=m;i<=n;++i)
            if(lol[i])
                ++k;
        printf("%d\n", k);
    }
    return 0;
}
