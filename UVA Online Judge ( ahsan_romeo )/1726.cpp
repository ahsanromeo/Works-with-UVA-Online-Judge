/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
const double eps = 1e-6;
const double PI = acos(-1.0);
const double ee = 2.71828182845904523536;
#define     rt             return
#define     inf            (1<<30)
#define     FAST           ios_base::sync_with_stdio(0);cin.tie(0);
#define     endl           '\n'
#define     pb             push_back
#define     sf             scanf
#define     pf             printf
#define     all(x)         x.begin(), x.end()
#define     bin_sea(xx,yy) binary_search(all(xx),yy)
#define     dbg(x)         cout << x << " came here\n";
#define     si(x)          sf("%d", &x);
#define     mem(x, y)      memset(x, y, sizeof(x));
#define     rep(i, x)      for(int i = 0; i < x; ++i)
#define     rep1(i, x)     for(int i = 1; i <= x; ++i)
#define     repstl(it, xx) for(auto it = xx.begin(); it != xx.end(); it++)
#define     min3(aa,bb,cc) min(aa, min(bb,cc))
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr1(aa)        cout << aa << '\n';
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(iii, x.size()) cout << x[iii] << ' '; cout << '\n';
lng C[11], I[11];
int get()
{
    int x;
    sf("%d", &x);
    return x;
}
int main()
{
    int T = get();
    while(T--)
    {
        lng q;
        sf("%lld", &q);
        mem(C, 0);
        mem(I, 0);
        while(q--)
        {
            int d = get(), s = get();
            char ss[5];
            sf("%s", ss);
            if(ss[0] == 'i' && s == 0)
                I[d]++;
            else if(ss[0] == 'c' && s == 1)
                C[d]++;
        }
        lng ans = 0;
        for(int i = 1; i <= 10; ++i)
            for(int j = i + 1; j <= 10; ++j)
                ans += (C[j] * I[i]);
        printf("%lld\n", ans);
    }
    return 0;
}
