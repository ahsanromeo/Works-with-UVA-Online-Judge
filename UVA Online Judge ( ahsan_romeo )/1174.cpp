
/// /* Bismillahir Rahmanir Rahim *\\


/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
typedef unsigned long long ulng;
const int iinf = 1 << 30;
const long long linf = 1LL << 62;
const double eps = 1e-6, PI = acos(-1.0), ee = 2.71828182845904523536, dinf = (double)linf;
lng Pow(lng b, lng p)
{
    if(p == 0) return 1;
    lng t = Pow(b, p >> 1);
    if(p & 1) return t * t * b;
    return t * t;
}
lng Powmod(lng b, lng p, lng m)
{
    if(p == 0) return 1;
    lng t = Powmod(b, p >> 1, m);
    if(p & 1) return ((t % m) * (t % m) * (b % m)) % m;
    return ((t % m) * (t % m)) % m;
}
lng gcd(lng a, lng b)
{
    return b == 0 ? a : gcd(b, a % b);
}
lng lcm(lng a, lng b)
{
    return a / gcd(a, b) * b;
}
inline double distance(double x1, double y1, double x2, double y2)
{
    x1 -= x2;
    y1 -= y2;
    return sqrt(x1 * x1 + y1 * y1);
}
inline string tostring(lng x)
{
    string r = "";
    while(x > 0)
    {
        r = (char)(x % 10 + 48) + r;
        x /= 10;
    }
    return r;
}
inline int getint()
{
    int x;
    scanf("%d", &x);
    return x;
}
inline lng getlng()
{
    lng x;
    scanf("%I64d", &x);
    return x;
}

int knightx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int knighty[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int floodx[] = {1, -1, 0, 0};
int floody[] = {0, 0, 1, -1};

#define     theromeo421       main()
#define     segtree           int lft = node << 1; int rgt = lft | 1; int mid = (b + e) >> 1;
#define     II                getint()
#define     LL                getlng()
#define     endl              '\n'
#define     pb                push_back
#define     sf                scanf
#define     pf                printf
#define     all(x)            x.begin(), x.end()
#define     xx                first
#define     yy                second
#define     bin_sea(xx,yy)    binary_search(all(xx),yy)
#define     dbg(x)            cout << x << " came here\n";
#define     mem(x, y)         memset(x, y, sizeof(x));
#define     rep(i, x)         for(int i = 0; i < x; ++i)
#define     rep1(i, x)        for(int i = 1; i <= x; ++i)
#define     For(i, a, b)      for(int i = a; i <= b; ++i)
#define     repstl(it, xx)    for(auto it = xx.begin(); it != xx.end(); it++)
#define     repbstl(it,x)     for(auto it = x.rbegin(); it != x.rend(); it++)
#define     min3(aa,bb,cc)    min(aa, min(bb,cc))
#define     max3(aa,bb,cc)    max(aa, max(bb,cc))
#define     RAD_TO_DEG        180.0/PI
#define     read(a)           freopen(a, "r", stdin);
#define     write(a)          freopen(a, "w", stdout);
#define     pr1(aa)           cout << aa << '\n';
#define     pr2(aa,bb)        cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)     cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     pr4(aa,bb,cc,dd)  cout << aa << ' ' << bb << ' ' << cc << ' ' << dd << '\n';
#define     prv(x)            rep(iii, x.size()) cout << x[iii] << " \n"[iii + 1 == x.size()];
#define     pra(x, s)         rep(iii, s) cout << x[iii] << " \n"[iii + 1 == s];
#define     pause             int ppause; cin >> ppause;

int n, m, par[20001];
map < string , int > mp;
char s1[10], s2[10];
struct edge
{
    int u, v, c;
    edge() {}
    edge(int _, int __, int ___)
    {
        u = _; v = __; c = ___;
    }
    bool operator < (const edge& e) const
    {
        return c < e.c;
    }
};
vector < edge > edges;
int _find(int c)
{
    return par[c] == c ? c : par[c] = _find(par[c]);
}
int kruskal()
{
    sort(all(edges));
    int h = 1, i = 0, len = edges.size(), r = 0;
    while(h < m && i < len)
    {
        int x = _find(edges[i].u), y = _find(edges[i].v);
        if(x != y)
        {
            par[x] = y;
            r += edges[i].c;
            ++h;
        }
        ++i;
    }
    return r;
}
int theromeo421
{
    int T = II;
    while(T--)
    {
        m = II, n = II;
        rep(i, m)
            par[i] = i;
        mp.clear();
        edges.clear();
        int ass = 0;
        rep(i, n)
        {
            sf("%s %s", s1, s2);
            if(mp.find(s1) == mp.end())
                mp[s1] = ass++;
            if(mp.find(s2) == mp.end())
                mp[s2] = ass++;
            edges.pb(edge(mp[s1], mp[s2], II));
        }
        pf("%d\n", kruskal());
        if(T)
            puts("");
    }
    return 0;
}
