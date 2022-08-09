
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
const double eps = 1e7;
const double PI = acos(-1.0);
const double RAD_TO_DEG = 180.0/PI;
#define     rt             return
#define     inf            (1 << 30)
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
#define     repstl(it, xx) for(auto it = xx.begin(); it != xx.end(); it++)
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(i, x.size()) cout << x[i] << ' '; cout << '\n';

vector<int> towin;
int main()
{
    lng n, G;
    while(sf("%lld %lld", &n, &G) == 2)
    {
        towin.clear();
        lng p = 0;
        while(n--)
        {
            int S, R;
            sf("%d %d", &S, &R);
            if(S > R)
                p += 3;
            else
                towin.pb(R - S + 1);
        }
        sort(all(towin));
        lng len = towin.size();

        for(lng i = 0; i < len; ++i)
        {
            if(towin[i] <= G)
            {
                p += 3;
                G -= towin[i];
            }
            else if(towin[i] - 1 == G)
            {
                p += 1;
                G -= (towin[i] - 1);
            }
            else if(G==0 && towin[i]>1)
            {
                break;
            }
        }
        pf("%lld\n", p);
    }
    return 0;
}
