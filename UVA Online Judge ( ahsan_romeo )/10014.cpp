
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
typedef unsigned long long ulng;
const double eps = 1e-6;
const double PI = acos(-1.0);
const double ee = 2.71828182845904523536;
const int iinf = 1 << 30;
const long long linf = 1LL << 62;
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
lng gcd(lng aa, lng bb)
{
    return bb == 0 ? aa : gcd(bb, aa % bb);
}
lng lcm(lng aa, lng bb)
{
    return aa / gcd(aa, bb) * bb;
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

#define     theromeo421    main()
#define     segtree        int lft = node << 1; int rgt = lft | 1; int mid = (b + e) >> 1;
#define     II             getint()
#define     LL             getlng()
#define     endl           '\n'
#define     pb             push_back
#define     sf             scanf
#define     pf             printf
#define     all(x)         x.begin(), x.end()
#define     xx             first
#define     yy             second
#define     bin_sea(xx,yy) binary_search(all(xx),yy)
#define     dbg(x)         cout << x << " came here\n";
#define     mem(x, y)      memset(x, y, sizeof(x));
#define     rep(i, x)      for(int i = 0; i < x; ++i)
#define     rep1(i, x)     for(int i = 1; i <= x; ++i)
#define     repstl(it, xx) for(auto it = xx.begin(); it != xx.end(); it++)
#define     min3(aa,bb,cc) min(aa, min(bb,cc))
#define     max3(aa,bb,cc) max(aa,max(bb,cc))
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr1(aa)        cout << aa << '\n';
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     pr4(aa,bb,cc,dd)  cout << aa << ' ' << bb << ' ' << cc << ' ' << dd << '\n';
#define     prv(x)         rep(iii, x.size()) cout << x[iii] << ' '; cout << '\n';
#define     repbstl(it,x)  for(auto it = x.rbegin(); it != x.rend(); it++)
#define     pra(xxx)       for(auto iii : xxx) cout << iii << ' '; cout << endl;
#define     pause          int ppause; cin >> ppause;

double c[3003];
int main()
{
    int T = II;
    while(T--)
    {
        int n = II;
        double a0, an1;
        sf("%lf %lf", &a0, &an1);
        rep1(i, n)
            sf("%lf", &c[i]);
        double lob = an1 + n * a0;
        for(int i = 1, j = n; i <= n; ++i, --j)
            lob -= c[i] * 2.0 * j;
        pf("%.2f\n", lob / (n + 1));
        if(T)
            puts("");
    }
    return 0;
}
