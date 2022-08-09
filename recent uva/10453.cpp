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
string s, t, u;
int len, dp[1001][1001];
int lcs(int i, int j)
{
    if(i == len || j == len)
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];
    if(s[i] == t[j])
        return dp[i][j] = 1 + lcs(i + 1, j + 1);
    return dp[i][j] = max(lcs(i + 1, j), lcs(i, j + 1));
}
void P(int i, int j)
{
    if(i == len || j == len)
        return;
    if(s[i] == t[j])
    {
        u += s[i];
        P(i + 1, j + 1);
    }
    else
    {
        if(dp[i + 1][j] > dp[i][j + 1])
        {
            P(i + 1, j);
        }
        else
        {
            P(i, j + 1);
        }
    }
}
int main()
{
    while(cin >> s)
    {
        mem(dp, -1);
        t = s;
        u = "";
        reverse(all(t));
        len = s.size();
        int LL = lcs(0, 0);
        P(0, 0);
        cout << LL << ' ' << u << endl;
    }
    return 0;
}
