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
lng anss[200001];
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
lng pgcd(lng x)
{
    lng r = 0;
    for(int i = 1; i < x; ++i)
    {
        for(int j = i + 1; j <= x; ++j)
        {
            r += gcd(i, j);
        }
    }
    return r;
}
int main()
{
    for(int i = 2; i <= 2000; ++i)
    {
        pgcd(i);
        //cout << i << " " << pgcd(i) << endl;
    }
    return 0;
}
