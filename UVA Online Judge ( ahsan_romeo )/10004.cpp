
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
#define     rt             return
#define     PI             acos(-1.0)
#define     eps            1e-9
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
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(i, x.size()) cout << x[i] << ' '; cout << '\n';

#define black 0
#define white 1
#define no_color -1
vector<int> V[201];
int col[201], n;
bool ok, vis[201];
void dfs(int curr)
{
    if(vis[curr])
        return;
    if(!ok)
        return;
    vis[curr] = true;
    int len = V[curr].size();
    if(col[curr] == no_color || col[curr] == black)
    {
        col[curr] = black;
        rep(i, len)
        {
            if(col[V[curr][i]] == black)
            {
                ok = false;
                return;
            }
            col[V[curr][i]] = white;
            dfs(V[curr][i]);
        }
    }
    else
    {
        col[curr] = white;
        rep(i, len)
        {
            if(col[V[curr][i]] == white)
            {
                ok = false;
                return;
            }
            col[V[curr][i]] = black;
            dfs(V[curr][i]);
        }
    }
}
int main()
{
    while(sf("%d", &n) == 1)
    {
        if(n == 0)
            return 0;
        int l;
        sf("%d", &l);
        rep(i, n)
            V[i].clear(), col[i] = no_color, vis[i] = false;
        while(l--)
        {
            int a, b;
            sf("%d %d", &a, &b);
            V[a].pb(b);
            V[b].pb(a);
        }
        ok = true;
        dfs(0);
        if(ok)
            puts("BICOLORABLE.");
        else
            puts("NOT BICOLORABLE.");
    }
    return 0;
}
