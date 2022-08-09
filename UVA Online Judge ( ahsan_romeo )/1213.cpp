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

vector<int> primes;
bool nums[1121];
void sieve()
{
    mem(nums, false);
    nums[0] = nums[1] = true;
    for(int i = 2; i < 1121; ++i)
        if(!nums[i])
        {
            for(int j = i + i; j < 1121; j += i)
                nums[j] = true;
            primes.pb(i);
        }
}
int n, k, dp[187][1121][15];
int call(int i, int cost, int way)
{
    if(way > k)
        return 0;
    if(way == k)
        return cost == n;
    if(i >= 187)
        return 0;
    if(dp[i][cost][way] != -1)
        return dp[i][cost][way];
    int p = 0;
    if(cost + primes[i] <= n)
        p = call(i + 1, cost + primes[i], way + 1);
    return dp[i][cost][way] = p + call(i + 1, cost, way);
}
int main()
{
    sieve();
    while(sf("%d %d", &n, &k) == 2)
    {
        if(n + k == 0)
            return 0;
        mem(dp, -1);
        pf("%d\n", call(0, 0, 0));
    }
    return 0;
}
