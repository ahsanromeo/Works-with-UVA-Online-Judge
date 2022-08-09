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

lng arr[100001], N;
bool fun(lng k)
{
    if(k < arr[0])
        return false;
    if(k == arr[0])
        --k;
    for(lng i = 1; i < N; ++i)
    {
        if(arr[i] - arr[i - 1] > k)
            return false;
        if(arr[i] - arr[i - 1] == k)
            --k;
    }
    return true;
}
int main()
{
    int T;
    sf("%d", &T);
    rep1(cas, T)
    {
        lng mx = -1;
        sf("%lld", &N);
        for(lng i = 0; i < N; ++i)
        {
            sf("%lld", arr + i);
            if(i)
                mx = max(mx, arr[i] - arr[i - 1]);
            else
                mx = max(mx, arr[i]);
        }
        for(lng m = mx; ; ++m)
            if(fun(m))
            {
                pf("Case %d: %lld\n", cas, m);
                break;
            }
    }
    return 0;
}
