/// UVA 11060

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

map<string, int> in_degree;
map<string, vector<string> > mvs;
vector<string> inp;
int main()
{
    int N, cas = 1;
    while(sf("%d", &N) == 1)
    {
        inp.clear();
        mvs.clear();
        in_degree.clear();
        rep(i, N)
        {
            string ss;
            cin >> ss;
            in_degree[ss] = 0;
            inp.push_back(ss);
        }
        int M;
        sf("%d", &M);
        rep(i, M)
        {
            string s, t;
            cin >> s >> t;
            in_degree[t]++;
            mvs[s].pb(t);
        }
        vector<string> anss(N);
        for(int i = 0; i < N; ++i)
        {
            int mn = 32000;
            string name;
            rep(j, N)
            {
                int w = in_degree[inp[j]];
                if(w >= 0 && w < mn)
                {
                    mn = w;
                    name = inp[j];
                }
            }
            in_degree[name] = -1;
            rep(j, mvs[name].size())
            {
                in_degree[mvs[name][j]]--;
            }
            anss[i] = name;
        }
        printf("Case #%d: Dilbert should drink beverages in this order:", cas++);
        rep(i, N)
            cout << ' ' << anss[i];
        printf(".\n\n");
    }
    return 0;
}
