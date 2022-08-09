
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
const double eps = 1e7;
#define     rt             return
#define     PI             acos(-1.0)
#define     inf            (1<<30)
#define     FAST           ios_base::sync_with_stdio(0);cin.tie(0);
#define     endl           '\n'
#define     pb             push_back
#define     sf             scanf
#define     pf             printf
#define     bin_sea        binary_search
#define     dbg(x)         cout << x << " came here\n";
#define     all(x)         x.begin(), x.end()
#define     si(x)          sf("%d", &x);
#define     mem(x, y)      memset(x, y, sizeof(x));
#define     rep(i, x)      for(int i = 0; i < x; ++i)
#define     rep1(i, x)     for(int i = 1; i <= x; ++i)
#define     replng(i, x)   for(lng i = 0; i < x; ++i)
#define     rep1lng(i, x)  for(lng i = 1; i <= x; ++i)
#define     repstl(it, xx) for(auto it = xx.begin(); it != xx.end(); it++)
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(i, x.size()) cout << x[i] << ' '; cout << '\n';

int main()
{
    int T;
    sf("%d", &T);
    rep1(cas, T)
    {
        lng x1, y1, x2, y2;
        sf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        lng l1 = x1 + y1, l2 = x2 + y2;
        if(l1 == l2)
        {
            pf("Case %d: %lld\n", cas, y2 - y1);
            continue;
        }
        lng tot = 0;
        for(lng i = l1 + 1; i < l2; ++i)
            tot += i;
        pf("Case %d: %lld\n", cas, tot + (l2 - l1) + (y1 + x2));
    }
    return 0;
}
