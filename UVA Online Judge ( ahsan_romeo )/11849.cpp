#include <iostream>
using namespace std;
#include <stdio.h>
#include <set>
int main()
{
    long long n, m, i, ins;
    while(scanf("%lld %lld", &n, &m))
    {
        if(n==0&&m==0)
            break;
        set<long long>mn;
        for(i=0;i<n;i++)
        {
            scanf("%lld", &ins);
            mn.insert(ins);
        }
        for(i=0;i<m;i++)
        {
            scanf("%lld", &ins);
            mn.insert(ins);
        }
        ins=(m+n-mn.size());
        printf("%lld\n", ins);
    }
}
