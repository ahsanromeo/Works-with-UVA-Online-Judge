
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
const double eps = 1e7;
const double PI = acos(-1.0);
#define     rt             return
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
bool nums[138];
vector<int> addable[17];
void who(int x, int n)
{
    rep1(i, n)
    {
        if(i == x)
            continue;
        if(x > 1 && i == 1)
            continue;
        if(!nums[i + x])
            addable[x].pb(i);
    }
}
void sieve()
{
    mem(nums, false);
    nums[0] = nums[1] = true;
    for(int i = 2; i * i <= 137; ++i)
        if(!nums[i])
            for(int j = i + i; j < 138; j += i)
                nums[j] = true;
    rep1(i, 16)
    who(i, 16);
}
vector<int> out;
int n;
bool take[18];
void call(int b)
{
    if(out.size() == n)
    {
        rep(pp, n)
        {
            if(pp)
                pf(" ");
            pf("%d", out[pp]);
        }
        puts("");
        return;
    }
    int len = addable[b].size();
    for(int i = 0; i < len; ++i)
    {
        int w = addable[b][i];
        if(out.size() < n - 1)
        {
            if(!take[w] && w <= n)
            {
                take[w] = true;
                out.pb(w);
                call(w);
                out.pop_back();
                take[w] = false;
            }
        }
        else
        {
            if(!take[w] && w <= n && !nums[w + 1])
            {
                take[w] = true;
                out.pb(w);
                call(w);
                out.pop_back();
                take[w] = false;
            }
        }
    }
}
int main()
{
    sieve();
    int cas = 1;
    while(sf("%d", &n) == 1)
    {
        mem(take, false);
        out.clear();
        out.pb(1);
        if(cas > 1)
            puts("");
        pf("Case %d:\n", cas++);
        call(1);
    }
    return 0;
}
