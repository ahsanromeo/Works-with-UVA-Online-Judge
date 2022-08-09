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
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen(x, "w", stdout);
int calc[1001][27];
int main()
{
    //read("out.txt");
    int T;
    sf("%d", &T);
    rep1(cas, T)
    {
        mem(calc, 0);
        string s;
        cin >> s;
        calc[0][s[0] - 97]++;
        int ans = 1;
        for(int i = 1; i < s.size(); ++i)
        {
            rep(j, 26)
            {
                calc[i][j] = calc[i - 1][j];
            }
            calc[i][s[i] - 97]++;

            for(int j = 0; j <= i; ++j)
            {
                int odd = 0;
                rep(k, 26)
                {
                    int xx = 0;
                    if(j == 0)
                    {
                        xx = calc[i][k];
                    }
                    else
                    {
                        xx = calc[i][k] - calc[j - 1][k];
                    }
                    odd += (xx % 2);
                    if(odd > 1)
                        break;
                }
                if(odd < 2)
                    ans++;
            }
        }
        printf("Case %d: %d\n", cas, ans);
    }
    return 0;
}
