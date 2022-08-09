

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

bool nums[2000010];
vector<int> primes;
lng tot;
void sieve()
{
    mem(nums, false);
    nums[0] = nums[1] = true;
    for(int i = 2; i <= 2000000; ++i)
    {
        if(!nums[i])
        {
            for(int j = i + i; j <= 2000000; j += i)
                nums[j] = true;
            primes.pb(i);
        }
    }
}

int how(int n)
{
    int r = 0;
    int s = sqrt(n);
    for(int i = 0; primes[i] <= s; ++i)
    {
        while(n % primes[i] == 0)
        {
            ++r;
            n /= primes[i];
        }
    }
    if(n > 1)
        ++r;
    return r;
}

struct numbers
{
    int n = 0, cnt = 0;
    numbers() {}
    void done(int nn)
    {
        n = nn;
        cnt = how(n);
    }
    bool operator < (const numbers& N) const
    {
        if(cnt == N.cnt)
        {
            return n < N.n;
        }
        else
        {
            return cnt < N.cnt;
        }
    }
}ww[2000000];

int main()
{
    sieve();
    rep(i, 2000000)
    {
        ww[i].done(i + 1);
    }
    sort(ww, ww + 2000000);
    int n, cas = 1;
    while(sf("%d", &n) == 1)
    {
        if(n == 0)
            return 0;
        pf("Case %d: %d\n", cas++, ww[n - 1].n);
    }
    return 0;
}
