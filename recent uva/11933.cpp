/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
#define rt return
#define PI acos(-1.0)
#define eps 1e-9
#define inf (1<<30)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back
#define sf scanf
#define pf printf
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x));
#define rep(i, x) for(int i = 0; i < x; ++i)
#define rep1(i, x) for(int i = 1; i <= x; ++i)
#define endl '\n'
int main()
{
    lng n;
    while(sf("%lld", &n) == 1)
    {
        if(n == 0)
            return 0;
        lng t = n, a = 0;
        int in = 0, th = 0;
        while(t)
        {
            if(t & 1LL)
            {
                if(th % 2 == 0)
                    a += (1LL << in);
                ++th;
            }
            t >>= 1;
            ++in;
        }
        pf("%lld %lld\n", a, n - a);
    }
    return 0;
}
