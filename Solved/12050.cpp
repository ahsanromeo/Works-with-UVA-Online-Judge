
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long lng;
#define     rt             return
#define     PI             acos(-1.0)
#define     eps            1e-9
#define     inf            (1<<30)
#define     FAST           ios_base::sync_with_stdio(0);cin.tie(0);
#define     endl           '\n'
#define     pb             push_back
#define     sf             scanf
#define     pf             printf
#define     bin_sea        binary_search
#define     dbg(x)         cout << x << " came here\n";
#define     all(x)         x.begin(), x.end()
#define     mem(x, y)      memset(x, y, sizeof(x));
#define     rep(i, x)      for(int i = 0; i < x; ++i)
#define     rep1(i, x)     for(int i = 1; i <= x; ++i)
#define     RAD_TO_DEG     180.0/PI
lng store[21];
lng ns(int x)
{
    if(x % 2 == 0)
        x--;
    lng m = 9;
    rep(i, x >> 1)
        m *= 10;
    return m;
}
void init()
{
    store[0] = 0LL;
    for(int i = 1; i <= 20; ++i)
        store[i] = store[i - 1] + ns(i);
}
int main()
{
    init();
    lng n;
    while(sf("%lld", &n) == 1)
    {
        if(n == 0)
            return 0;
        if(n < 10)
        {
            printf("%lld\n", n);
            continue;
        }
        int f = 0;
        while(store[f] < n)
            ++f;
        if(f == 2)
        {
            n %= 10;
            printf("%lld%lld\n", n + 1, n + 1);
            continue;
        }
        n -= store[f - 1];
        string ans = "";
        ans.assign(f, '*');
        if(f & 1)
        {
            int p = f >> 1;
            ans[p--] = (n - 1) % 10 + 48;
            lng m = 10LL;
            while(p > 0)
            {
                 ans[p--] = (((n - 1) / m) % 10) + 48;
                 m *= 10;
            }
            ans[0] = (((n - 1) / m) % 10) + 49;
            p = f >> 1;
            for(int i = f - 1, j = 0; i > p; --i, ++j)
                ans[i] = ans[j];
            cout << ans << '\n';
        }
        else
        {
            int p = (f >> 1) - 1;
            ans[p] = ans[p + 1] = (n - 1) % 10 + 48;
            --p;
            lng m = 10LL;
            while(p > 0)
            {
                ans[p--] = (((n - 1) / m) % 10) + 48;
                m *= 10;
            }
            ans[0] = (((n - 1) / m) % 10) + 49;
            p = (f >> 1) + 1;
            for(int i = f - 1, j = 0; i >= p; i--, ++j)
                ans[i] = ans[j];
            cout << ans << endl;
        }
    }
    return 0;
}
