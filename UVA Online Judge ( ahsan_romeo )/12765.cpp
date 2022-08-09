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
string store[11];
string fact(int n)
{
    string r = "";
    int v = 2;
    while(n > 1)
    {
        while(n % v == 0)
        {
            n /= v;
            r += (char)(v + 48);
        }
        ++v;
    }
    return r;
}
int main()
{
    for(int i = 2; i <= 9; ++i)
    {
        store[i] = "";
        for(int j = 2; j <= i; ++j)
        {
            store[i] += fact(j);
        }
    }
    int N, M, in;
    while(sf("%d %d", &N, &M) == 2)
    {
        if(N + M == 0)
            return 0;
        string Ns = "", Ms = "";
        rep(i, N)
        {
            sf("%d", &in);
            if(in > 1)
                Ns += store[in];
        }
        rep(i, M)
        {
            sf("%d", &in);
            if(in > 1)
                Ms += store[in];
        }
        sort(all(Ns));
        sort(all(Ms));
        if(Ns == Ms)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
