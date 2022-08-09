
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
vector<lng> Lost;
int main()
{
    lng N, G, ans, DC;
    while(sf("%lld %lld", &N, &G) == 2)
    {
        Lost.clear();
        int S, R;
        ans = DC = 0;
        for(lng i = 0; i < N; ++i)
        {
            sf("%d %d", &S, &R);
            if(S > R)
                ans += 3;
            else if(S == R)
            {
                ++DC;
                ++ans;
            }
            else
                Lost.pb(R - S + 1);
        }
        while(DC && G)
        {
            --G;
            --DC;
            ans += 2;
        }
        if(G <= 0)
        {
            pf("%lld\n", ans);
            continue;
        }
        sort(all(Lost));
        lng len = Lost.size();
        for(lng i = 0; i < len && G; ++i)
            if(G >= Lost[i])
            {
                G -= Lost[i];
                ans += 3;
            }
        pf("%lld\n", ans);
    }
    return 0;
}
