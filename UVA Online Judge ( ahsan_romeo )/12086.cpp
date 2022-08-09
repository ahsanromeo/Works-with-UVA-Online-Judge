/// uva 12086
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
const long long inf = 1LL << 62;
lng Pow(lng b, lng p)
{
    if(p == 0) return 1;
    lng t = Pow(b, p >> 1);
    if(p & 1) return t * t * b;
    return t * t;
}
lng gcd(lng aa, lng bb)
{
    return bb == 0 ? aa : gcd(bb, aa % bb);
}
lng lcm(lng aa, lng bb)
{
    return aa / gcd(aa, bb) * bb;
}
double distance(double x1, double y1, double x2, double y2)
{
    x1 -= x2;
    y1 -= y2;
    return sqrt(x1 * x1 + y1 * y1);
}
string tostring(lng x)
{
    string r = "";
    while(x > 0)
    {
        r = (char)(x % 10 + 48) + r;
        x /= 10;
    }
    return r;
}
#define     rt0            return 0;
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
#define     gti(xx)        scanf("%d", &xx);
#define     gtl(xx)        scanf("%I64d", &xx);
#define     gts(xx)        getline(cin, xx);

#define mx 200002
int arr[mx], tree[mx << 2];
void build(int node, int b, int e)
{
    if(b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int lft = node << 1;
    int rgt = lft + 1;
    int mid = (b + e) >> 1;
    build(lft, b, mid);
    build(rgt, mid + 1, e);
    tree[node] = tree[lft] + tree[rgt];
}
void U(int node, int b, int e, int i, int v)
{
    if(b > i || e < i)
        return;
    if(b >= i && e <= i)
    {
        tree[node] = v;
        return;
    }
    int lft = node << 1;
    int rgt = lft + 1;
    int mid = (b + e) >> 1;
    U(lft, b, mid, i, v);
    U(rgt, mid + 1, e, i, v);
    tree[node] = tree[lft] + tree[rgt];
}
int Q(int node, int b, int e, int i, int j)
{
    if(b > j || e < i)
        return 0;
    if(b >= i && e <= j)
        return tree[node];
    int lft = node << 1;
    int rgt = lft + 1;
    int mid = (b + e) >> 1;
    return Q(lft, b, mid, i, j) + Q(rgt, mid + 1, e, i, j);
}
char ins[5];
int main()
{
    int N, cas = 1;
    while(sf("%d", &N) == 1)
    {
        if(N == 0)
            return 0;
        rep1(i, N)
            sf("%d", arr + i);
        build(1, 1, N);
        if(cas > 1)
            puts("");
        pf("Case %d:\n", cas++);
        while(true)
        {
            sf("%s", ins);
            if(strcmp(ins, "END") == 0)
                break;
            int x, y;
            sf("%d %d", &x, &y);
            if(ins[0] == 'S')
                U(1, 1, N, x, y);
            else
                pf("%d\n", Q(1, 1, N, x, y));
        }
    }
    return 0;
}
