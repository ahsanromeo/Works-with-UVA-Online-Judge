
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

lng arr[51], tot[51], fre[51];
void init()
{
    arr[0] = tot[0] = 0;
    arr[1] = arr[2] = 1;
    tot[1] = 1;
    tot[2] = 2;
    for(int i = 3; i <= 50; ++i)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
        tot[i] = tot[i - 1] + arr[i];
    }
}

string get(int n, int len)
{
    string r = "1";
    for(int i = 1; i < len; ++i)
        r += '0';
    for(int i = 2, j = len; i <= len; ++i, --j)
        fre[i] = arr[j];
    int sti = 2;
    while(sti < len)
    {
        int big = fre[sti + 1];
        if(n <= big)
        {
            sti++;
        }
        else
        {
            n -= big;
            r[sti] = '1';
            sti += 2;
        }
    }
    return r;
}

int main()
{
    int t, k;
    sf("%d", &t);
    init();
    while(t--)
    {
        sf("%d", &k);
        int pos = 0;
        for(int i = 0; i <= 38; ++i)
        {
            if(k <= tot[i])
            {
                pos = i;
                break;
            }
        }
        puts(get(k - tot[pos - 1], pos).c_str());
    }
    return 0;
}
