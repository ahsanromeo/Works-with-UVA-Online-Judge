/// Bismillahir Rahmanir Rahim
/// S. M. Shakir Ahsan Romeo

#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;

const double PI = acos(-1.0);

typedef long long lng;
typedef unsigned long long ulng;
typedef double db;
typedef pair < int, int >  pii;
typedef vector < pii >  vpii;
//typedef tree < int, null_type, less < int >, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

inline int getint()
{
    int x;
    scanf("%d", &x);
    return x;
}
#define II getint()
inline long long getlng()
{
    long long x;
    scanf("%lld", &x);
    return x;
}
#define LL getlng()
int dx4[] = { -1, 0, 1, 0 };
int dy4[] = { 0, 1, 0, -1 };
int dx8[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy8[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void solve();
#define theromeo421 main()
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define segtree int lft = node << 1, rgt = lft | 1, mid = (b + e) >> 1;
#define mem(x, y) memset((x), (y), sizeof (x));
#define sz(x) ((int)x.size())
#define max3(a,b,c) max(a, max(b,c))
#define min3(a,b,c) min(a, min(b,c))
#define pr1(x) cout << x << endl
#define pr2(x,y) cout << x << ' ' << y << endl
#define rep(i, n) for(int i = 0; i < n; ++i)
#define rep1(i, n) for(int i = 1; i <= n; ++i)
#define repstl(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define forcon(pp , qq) for(const auto& pp : qq)
#define all(x) (x).begin(), (x).end()
#define Unique(x) sort(all(x)); x.erase(unique(all(x)), x.end()); /// x needs to be sorted first
#define pb push_back
#define GCD(x, y) __gcd((x), (y))
#define LCM(x, y) ((x / GCD((x), (y))) * y)
#define wait system("pause")
#define xx first
#define yy second
#define dbg(x) cerr << #x << "=" << x << endl;
#define dbg2(x, y) cerr << #x << "=" << x << ", " << #y << "=" << y << endl;
#define read(a) freopen(a, "r", stdin);
#define write(a) freopen(a, "w", stdout);
#define prv(v) rep(i, sz(v)) cout << v[i] << " \n"[i + 1 == sz(v)];
#define Case int T; scanf("%d", &T); for(int cas = 1; cas <= T; ++cas)
#define pf printf
#define sf scanf
#define MP make_pair
#define endl '\n'
#define ppp system("pause");
const double eps = (double)1e-10;


int theromeo421
{
    /// PLEASE HACK my code, I am error prone.
    /// Your hack can save me from the cruel hand of system testing. :) :P ;)
    //FAST;
    solve();
#ifdef romeo
    cerr << "\nElapsed time: " << 1.0 * clock() / CLOCKS_PER_SEC << '\n';
#endif // romeo
#ifdef visualstudio
    system("pause");
#endif // visualstudio
    return 0;
}

const int N = 1e4 + 1;
int arr[N];
int n, k;

int call(int i, int j, int cnt)
{
    if(cnt > k) return 1e9;
    if(i >= j) return cnt;
    if(arr[i] == arr[j]) return call(i + 1, j - 1, cnt);
    return min(call(i + 1, j, cnt + 1), call(i, j - 1, cnt + 1));
}

void solve()
{
    Case
    {
        n = II, k = II;
        rep1(i, n)
        {
            arr[i] = II;
        }
        bool can = true;
        for(int i = 1, j = n; i < j; ++i, --j)
        {
            if(arr[i] != arr[j])
            {
                can = false;
                break;
            }
        }
        pf("Case %d: ", cas);
        if(can)
        {
            puts("Too easy");
            continue;
        }
        int g = call(1, n, 0);
        if(g <= k)
        {
            pf("%d\n", g);
        }
        else
        {
            puts("Too difficult");
        }
    }
}

