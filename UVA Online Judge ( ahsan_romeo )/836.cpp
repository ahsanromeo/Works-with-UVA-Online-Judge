/// Bismillahir Rahmanir Rahim
/// S. M. Shakir Ahsan Romeo ( Pure_Protea, #theromeo421, Cosmos_Freak )
/// CSE Discipline, Khulna University, Khulna
/// Monirampur, Jessore.

#include <bits/stdc++.h>
using namespace std;

typedef long long lng;
typedef vector < int >  vi;
typedef vector < lng >  vl;
typedef pair < int, int >  pii;
typedef vector < pii >  vpii;

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
    scanf("%lld", &x);
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
#define sz(x) ((int)x.size())
#define sqr(x) ((x) * (x))
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))
#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
#define pr3(x,y,z) cout << x << ' ' << y << ' ' << z << endl
#define pr4(a,b,c,d) cout << a << ' ' << b << ' ' << c << ' ' << d << endl
#define rep(i, n) for(int i = 0; i < n; ++i)
#define rep1(i, n) for(int i = 1; i <= n; ++i)
#define repab(i, a, b) for(int i = a; i <= b; ++i)
#define repba(i, b, a) for(int i = b - 1; i >= a; --i)
#define repstl(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define repbstl(it, x) for(auto it = x.rbegin(); it != x.rend(); it++)
#define forch(it, x) for(auto it : x)
#define pb push_back
#define all(x) x.begin(), x.end()
#define xx first
#define yy second
#define dbg(x) cerr << #x << " :  " << x << endl;
#define read(a) freopen(a, "r", stdin);
#define write(a) freopen(a, "w", stdout);
#define prv(v) rep(i, v.size()) cout << v[i] << " \n"[i + 1 == v.size()];
#define prmp(x) repstl(it, x) pr2(it->xx, it->yy)
#define pause int ppause; cin >> ppause;
#define pf printf
#define sf scanf
#define MP make_pair

vector < string > input;

int dp[28][28];

void solve(vector < string > v)
{
    mem(dp, 0);
    int n = sz(v);
    v.insert(v.begin(), string(n, '0'));
    for(int i = 0; i <= n; ++i)
    {
        v[i] = '0' + v[i];
    }
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + v[i][j] - 48;
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            for(int ii = i; ii <= n; ++ii)
            {
                for(int jj = j; jj <= n; ++jj)
                {
                    int has = dp[ii][jj] - dp[ii][j - 1] - dp[i - 1][jj] + dp[i - 1][j - 1];
                    if(has == (ii - i + 1) * (jj - j + 1))
                    {
                        ans = max(ans, has);
                    }
                }
            }
        }
    }
    printf("%d\n", ans);
}

int theromeo421
{
    //read("balin.txt");
    string ins;
    while(getline(cin, ins))
    {
        input.pb(ins);
    }
    input.erase(input.begin());
    input.erase(input.begin());
    input.pb("");
    vector < string > v;
    bool pr = false;
    for(auto s : input)
    {
        if(s == "")
        {
            if(pr)
                putchar('\n');
            pr = true;
            solve(v);
            v.clear();
        }
        else
        {
            v.pb(s);
        }
    }
    return 0;
}
