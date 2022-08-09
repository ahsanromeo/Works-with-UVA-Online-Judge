
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
#define     xx             first
#define     yy             second
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
#define     pr4(aa,bb,cc,dd)  cout << aa << ' ' << bb << ' ' << cc << ' ' << dd << '\n';
#define     prv(x)         rep(iii, x.size()) cout << x[iii] << ' '; cout << '\n';
#define     repbstl(it,x)  for(auto it = x.rbegin(); it != x.rend(); it++)
#define     alen(x)        sizeof(x) / sizeof(x[0]);
int main()
{
    int ans[] = {0,0,0,2,5,2,4,3,11,2,3,8,16,4,21,6,5,2,11,20,34,8,15,10,7,13,11,13,45,18,23,8,3,2,25,75,42,13,5,23,13,50,16,18,89,38,8,39,30,29,38,7,45,23,137,46,63,17,48,5,46,34,140,33,39,2,28,29,79,33,48,3,10,46,120,6,37,17,8,44,15,160,20,35,144,104,179,153,24,8,265,19,9,62,7,139,19,44,93,182,27,158,185,193,17,82,3,11,43,55,21,41,146,29,80,59,8,29,66,19,160,59,28,129,127,120,72,45,157,2,63,127,81,318,513,98,28,32,231,236,411,26,45,5,303,228,66,9,205,65};
    int n;
    while(sf("%d", &n) == 1)
    {
        if(n == 0)
            return 0;
        pf("%d\n", ans[n]);
    }
    return 0;
}
