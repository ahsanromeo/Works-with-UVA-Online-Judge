
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

int occ[101][128];
string mp[101];
bool check(int a, int b)
{
    rep(k, 128)
    if(occ[a][k] != occ[b][k])
        return false;
    return true;
}
struct out
{
    string a, b;
    void ww()
    {
        if(a > b)
            swap(a, b);
    }
    bool operator < (const out& oo) const
    {
        if(a == oo.a)
            return  lexicographical_compare(b.begin(), b.end(), oo.b.begin(), oo.b.end());
        return  lexicographical_compare(a.begin(), a.end(), oo.a.begin(), oo.a.end());
    }
};
vector<out> output;
int main()
{
    int T;
    sf("%d", &T);
    getchar();
    string s;
    getline(cin, s);
    while(T--)
    {
        mem(occ, 0);
        int pos = 0;
        while(getline(cin, s))
        {
            int len = s.size();
            if(len == 0)
                break;
            mp[pos] = s;
            rep(i, len)
                if(s[i] != ' ')
                    occ[pos][s[i]]++;
            pos++;
        }
        output.clear();
        rep(i, pos)
        for(int j = i + 1; j < pos; ++j)
            if(check(i, j))
                output.pb({mp[i], mp[j]});
        int l = output.size();
        rep(i, l)
            output[i].ww();
        sort(all(output));
        rep(i, l)
            cout << output[i].a << " = " << output[i].b << '\n';
        if(T)
            puts("");
    }
    return 0;
}
