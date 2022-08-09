
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
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(i, x.size()) cout << x[i] << ' '; cout << '\n';

#define MAX 677

vector<int> V[MAX + 1];
int av[MAX + 1];
int arr[MAX + 1], ass, st, en;
bool vis[MAX + 1];
map<string, int> mp;
map<int, string> pm;
queue<int> Q;
vector<string> ans;


void clear()
{
    while(!Q.empty())
        Q.pop();
    mp.clear();
    pm.clear();
    mem(arr, 0);
    mem(vis, false);
    rep(i, MAX + 1)
        V[i].clear();
    ass = 0;
    ans.clear();
    mem(av, -1);
}
void dfs(int x)
{
    if(x == st)
        return;
    ans.pb(pm[av[x]]);
    dfs(av[x]);
}
int main()
{
    //read("input.txt");
    //write("output.txt");
    int n;
    bool pri = false;
    while(sf("%d", &n) == 1)
    {
        clear();
        if(pri)
            puts("");
        pri = true;
        rep(i, n)
        {
            string a, b;
            cin >> a >> b;
            if(mp.find(a) == mp.end())
                mp[a] = ass, pm[ass++] = a;
            if(mp.find(b) == mp.end())
                mp[b] = ass, pm[ass++] = b;
            V[mp[a]].pb(mp[b]), V[mp[b]].pb(mp[a]);
        }
        string aa, bb;
        cin >> aa >> bb;
        if(mp.find(aa) == mp.end())
            mp[aa] = ass, pm[ass++] = aa;
        if(mp.find(bb) == mp.end())
            mp[bb] = ass, pm[ass++] = bb;
        int a = mp[aa], b = mp[bb];
        st = a, en = b;
        Q.push(a);
        vis[a] = true;
        bool f = false;
        while(!Q.empty())
        {
            int x = Q.front(), len = V[x].size();
            Q.pop();
            rep(i, len)
            {
                int y = V[x][i];
                if(!vis[y])
                {
                    vis[y] = true;
                    Q.push(y);
                    arr[y] = arr[x] + 1;
                    av[y] = x;
                    if(y == b)
                    {
                        f = true;
                        break;
                    }
                }
            }
            if(f)
                break;
        }
        if(f)
        {
            dfs(b);
            reverse(all(ans));
            ans.pb(bb);
            int len = ans.size();
            for(int i = 1; i < len; ++i)
                pr2(ans[i - 1], ans[i]);
        }
        else
            puts("No route");
    }
    return 0;
}
