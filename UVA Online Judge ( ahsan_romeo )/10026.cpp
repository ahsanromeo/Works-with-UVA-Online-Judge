
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
#define     repstl(it, xx) for(auto it = xx.begin(); it != xx.end(); it++)
#define     min3(aa,bb,cc) min(aa, min(bb,cc))
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(iii, x.size()) cout << x[iii] << ' '; cout << '\n';

int N;
struct Work
{
    int T, S, ind;
};
Work w[1001];
bool cmp(Work ii, Work jj)
{
    double k = (double)(ii.S * 1.0) / (double)(ii.T * 1.0);
    double l = (double)(jj.S * 1.0) / (double)(jj.T * 1.0);
    return l < k;
}
int main()
{
    int T;
    sf("%d", &T);
    while(T--)
    {
        sf("%d", &N);
        rep(i, N)
        {
            sf("%d %d", &w[i].T, &w[i].S);
            w[i].ind = i + 1;
        }
        stable_sort(w, w + N, cmp);
        rep(i, N)
        {
            if(i)
                pf(" ");
            pf("%d", w[i].ind);
        }
        puts("");
        if(T)
            puts("");
    }
    return 0;
}
