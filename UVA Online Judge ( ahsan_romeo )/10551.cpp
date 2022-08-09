

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
#define     pra(xxx)       for(auto iii : xxx) cout << iii << ' '; cout << endl;
#define     pause          int ppause; cin >> ppause;

int main()
{
    //write("oo.txt");
    int b;
    char s[1001];
    char m[11];
    while(sf("%d", &b) == 1)
    {
        if(b == 0)
            return 0;
        sf("%s %s", s, m);
        lng M = 0;
        for(int i = 0; m[i]; ++i)
            M = M * b + (m[i] - 48);
        lng mod = 0;
        for(int i = 0; s[i]; ++i)
            mod = (mod * b + (s[i] - 48)) % M;
        if(mod == 0)
        {
            puts("0");
            continue;
        }
        char ans[11];
        int id = 0;
        while(mod > 0)
        {
            ans[id++] = (mod % b) + 48;
            mod /= b;
        }
        for(int i = id - 1; i >= 0; --i)
            putchar(ans[i]);
        puts("");
    }
    return 0;
}
