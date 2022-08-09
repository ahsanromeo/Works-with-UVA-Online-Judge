#include <iostream>
#include <cstdio>
#include <cmath>
#include <map>
using namespace std;
typedef long long lng;
#define MAX 2147483647
map<lng, lng> mp;
int main()
{
    mp.clear();
    mp[1] = 1;
    mp[-1] = 1;
    for(lng i = 2; i <= 46341; ++i)
    {
        lng j = i, cnt = 1;
        while(j <= MAX)
        {
            mp[j] = max(mp[j], cnt);
            ++cnt;
            j *= i;
        }
    }
    for(lng i = -2; i >= -46341; --i)
    {
        lng j = i, cnt = 1;
        while(j <= MAX && j >= (-MAX - 1))
        {
            mp[j] = max(mp[j], cnt);
            ++cnt;
            j *= i;
        }
    }
    lng x;
    while(scanf("%lld", &x) == 1)
    {
        if(x == 0)
            return 0;
        if(mp[x] == 0)
            printf("1\n");
        else
            printf("%lld\n", mp[x]);
    }
    return 0;
}
