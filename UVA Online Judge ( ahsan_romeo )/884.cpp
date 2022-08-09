
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
const double eps = 1e7;
const double PI = acos(-1.0);
#define     rt             return
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
#define     min3(aa,bb,cc) min(aa, min(bb,cc))
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     prv(x)         rep(iii, x.size()) cout << x[iii] << ' '; cout << '\n';
bool is_prime[1000001];
vector<lng> primes;
//lng divcnt[1000001] = {0};
lng ans[1000001] = {0};
void sieve()
{
    mem(is_prime, false);
    is_prime[0] = is_prime[1] = true;
    for(lng i = 2; i < 2001; ++i)
    {
        if(!is_prime[i])
        {
            for(lng j = i + i; j < 1000001; j += i)
            {
                is_prime[j] = true;
            }
            primes.pb(i);
        }
    }
}
bool is_sq(lng nn)
{
    lng sq = sqrt(nn * 1.0);
    return sq * sq == nn;
}
lng dcnt(lng n)
{
    lng ret = 0, id = 0;
    while(primes[id] <= sqrt(n))
    {
        while(n % primes[id] == 0)
        {
            n /= primes[id];
            ++ret;
        }
        ++id;
    }
    if(n > 2)
        ++ret;
    return ret;
}
int main()
{
    sieve();
    for(lng i = 2; i <= 1000000; ++i)
    {
        ans[i] = ans[i - 1] + dcnt(i);
    }
    lng n;
    while(sf("%lld", &n) == 1)
    {
        pf("%lld\n", ans[n] + 1);
    }
    return 0;
}
