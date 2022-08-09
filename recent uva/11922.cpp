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
#define MAX 200005
vector<lng> v;
lng n, m, a, b, x, y;
int main()
{
    sf("%lld %lld", &n, &m);
    rep(i, n)
        v.pb(i + 1);
    while(m--)
    {
        sf("%lld %lld", &a, &b);
        if(a > b)
            swap(a, b);
        a--;
        b--;
        vector<lng> te(v.begin() + a, (v.begin() + b + 1));
        v.erase(v.begin() + a, v.begin() + (b + 1));
        lng len = te.size();
        for(lng i = len - 1; i >= 0; --i)
            v.pb(te[i]);

    }
    for(lng i = 0; i < n; ++i)
        pf("%lld\n", v[i]);
    return 0;
}
