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
#define getint(xx) sf("%d", &xx);
map<string, int> day, mon;
int main()
{
    day["SUN"] = 0;
    day["MON"] = 1;
    day["TUE"] = 2;
    day["WED"] = 3;
    day["THU"] = 4;
    day["FRI"] = 5;
    day["SAT"] = 6;

    mon["JAN"] = 31;
    mon["FEB"] = 28;
    mon["MAR"] = 31;
    mon["APR"] = 30;
    mon["MAY"] = 31;
    mon["JUN"] = 30;
    mon["JUL"] = 31;
    mon["AUG"] = 31;
    mon["SEP"] = 30;
    mon["OCT"] = 31;
    mon["NOV"] = 30;
    mon["DEC"] = 31;

    int T;
    getint(T);
    while(T--)
    {
        string m, d;
        cin >> m >> d;
        int mc = mon[m], ds = day[d], ans = 0;
        for(int i = 1, j = ds; i <= mc; ++i, ++j)
        {
            int mod = j % 7;
            ans += (mod == 5 || mod == 6);
        }
        pf("%d\n", ans);
    }
    return 0;
}
