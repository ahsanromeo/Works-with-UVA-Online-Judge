
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
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(i, x.size()) cout << x[i] << ' '; cout << '\n';

int main()
{
    lng n, m;
    while(sf("%lld %lld", &n, &m) == 2)
    {
        lng ans = 1LL;
        if(m == 0)
        {
            puts("1");
            continue;
        }
        while(m--)
        {
            ans *= n;
            n--;
            while(ans % 10 == 0)
                ans /= 10;
            ans %= 1000000000;
        }
        pf("%lld\n", ans % 10);
    }
    return 0;
}
