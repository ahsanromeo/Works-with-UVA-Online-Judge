
/// Bismillahir Rahmanir Rahim

/// S. M. Shakir Ahsan Romeo ( Pure_Protea, #theromeo421, Cosmos_Freak )

/// CSE Discipline, Khulna University, Khulna

/// Monirampur, Jessore.

#include <bits/stdc++.h>
using namespace std;
typedef long long lng;

const int inf = 1 << 30;
const long long linf = 1LL << 62;
const double PI = acos(-1.0), dinf = (double)(1LL << 62), eps = (double)(1e-9);

double distance(double x1, double y1, double x2, double y2)
{
    x1 -= x2;
    y1 -= y2;
    return sqrt(x1 * x1 + y1 * y1);
}
long long POW(long long b, long long p)
{
    if(p == 0)
        return 1;
    long long t = POW(b, p >> 1);
    if(p & 1)
        return t * t * b;
    return t * t;
}
long long bigmod(long long b, long long p, long long m)
{
    if(p == 0)
        return 1;
    long long t = POW(b, p >> 1) % m;
    t = (t * t) % m;
    if(p & 1)
        t = (t * b) % m;
    return t;
}
inline int getint()
{
    int x;
    scanf("%d", &x);
    return x;
}
inline long long getlng()
{
    long long x;
    scanf("%I64d", &x);
    return x;
}

lng gcd(lng a, lng b)
{
    return !b ? a : gcd(b, a % b);
}

lng lcm(lng a, lng b)
{
    return (a / gcd(a, b)) * b;
}

int dx4[] = {-1, 0, 1, 0};
int dy4[] = {0, 1, 0, -1};
int dx8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

#define theromeo421 main()
#define segtree int lft = node << 1, rgt = lft | 1, mid = (b + e) >> 1;
#define mem(x, y) memset(x, y, sizeof x);
#define II getint()
#define LL getlng()
#define sqr(x) ((x) * (x))
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))
#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
#define pr3(x,y,z) cout << x << ' ' << y << ' ' << z << endl
#define pr4(a,b,c,d) cout << a << ' ' << b << ' ' << c << ' ' << d << endl
#define rep(i, n) for(int i = 0; i < n; ++i)
#define rep1(i, n) for(int i = 1; i <= n; ++i)
#define pb push_back
#define all(x) x.begin(), x.end()
#define xx first
#define yy second
#define dbg(x) cerr << #x << " :  " << x << endl;
#define read(a) freopen(a, "r", stdin);
#define write(a) freopen(a, "w", stdout);
#define prv(v) rep(i, v.size()) cout << v[i] << " \n"[i + 1 == v.size()];
#define pause int ppause; cin >> ppause;

const int N = 26;

vector < int > graph[N], trans[N];
bool vis[N], mat[N][N];
char name1[N], name2[N];
map < string, int > mp;
string out[N];
vector < string > scc;
int ass;
stack < int > st;

void clear()
{
    while(!st.empty())
        st.pop();
    mp.clear();
    ass = 1;
    scc.clear();
    rep(i, N)
    {
        graph[i].clear();
        trans[i].clear();
        vis[i] = false;
        rep(j, N)
            mat[i][j] = false;
    }
}

void dfs1(int u)
{
    vis[u] = true;
    int len = graph[u].size();
    rep(i, len)
    {
        int v = graph[u][i];
        if(!vis[v])
            dfs1(v);
    }
    st.push(u);
}

void dfs2(int u)
{
    vis[u] = true;
    int len = trans[u].size();
    rep(i, len)
    {
        int v = trans[u][i];
        if(!vis[v])
            dfs2(v);
    }
    scc.pb(out[u]);
}

int theromeo421
{
    int n, m, cas = 1;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n + m == 0)
            return 0;
        clear();
        rep(i, m)
        {
            scanf("%s %s", name1, name2);
            if(mp.find(name1) == mp.end())
            {
                mp[name1] = ass;
                out[ass++] = name1;
            }
            if(mp.find(name2) == mp.end())
            {
                mp[name2] = ass;
                out[ass++] = name2;
            }
            int u = mp[name1], v = mp[name2];
            if(!mat[u][v])
            {
                graph[u].pb(v);
                trans[v].pb(u);
                mat[u][v] = true;
            }
        }
        rep1(i, n)
            if(!vis[i])
                dfs1(i);
        mem(vis, false);
        if(cas > 1)
            putchar('\n');
        printf("Calling circles for data set %d:\n", cas++);
        while(!st.empty())
        {
            int u = st.top();
            st.pop();
            if(vis[u])
                continue;
            scc.clear();
            dfs2(u);
            int len = scc.size();
            rep(i, len)
            {
                if(i)
                    printf(", ");
                printf("%s", scc[i].c_str());
            }
            putchar('\n');
        }
    }
    return 0;
}
