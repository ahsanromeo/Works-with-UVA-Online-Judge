/// UVA 10616

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

int N, Q, D, M, arr[201];
lng arr2[201], dp[201][21][201], dpneg[201][21][201];
lng call(int i, int cost, int taken)
{
    if(i >= N)
        return taken == M && cost == 0;
    if(cost >= 0)
    {
        if(dp[i][cost][taken] != -1)
            return dp[i][cost][taken];
        lng p1 = 0, p2 = 0;
        if(taken < M)
            p1 = call(i + 1, (cost + arr[i]) % D, taken + 1);
        p2 = call(i + 1, cost, taken);
        return dp[i][cost][taken] = p1 + p2;
    }
    if(dpneg[i][-cost][taken] != -1)
        return dpneg[i][-cost][taken];
    lng p1 = 0, p2 = 0;
    if(taken < M)
        p1 = call(i + 1, (cost + arr[i]) % D, taken + 1);
    p2 = call(i + 1, cost, taken);
    return dpneg[i][-cost][taken] = p1 + p2;
}
int main()
{
    int cas = 1;
    while(sf("%d %d", &N, &Q) == 2)
    {
        if(N + Q == 0)
            return 0;
        rep(i, N)
            sf("%lld", arr2 + i);
        int pq = 1;
        pf("SET %d:\n", cas++);
        while(Q--)
        {
            sf("%d %d", &D, &M);
            mem(dp, -1);
            mem(dpneg, -1);
            rep(i, N)
                arr[i] = arr2[i] % D;
            pf("QUERY %d: %lld\n", pq++, call(0, 0, 0));
        }
    }
    return 0;
}
