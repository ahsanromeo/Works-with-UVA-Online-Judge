#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long lng;
typedef vector<int> vi;
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
#define READ freopen("in1.txt", "r", stdin);
#define WRITE freopen("out.txt", "w", stdout);
#define INF 2147483646
int id, dp[1001][1001][2], dp2[1001][1001][2];
vi A, B;
struct Elephant
{
    int kg, iq, ser;
    bool operator < (const Elephant& EE) const
    {
        return iq > EE.iq;
    }
} E[1002];
struct Elephant2
{
    int kg, iq, ser;
    bool operator < (const Elephant2& EE) const
    {
        return kg < EE.kg;
    }
} E2[1002];
int fun(int i, int prev, bool t)
{
    if(i > id)
    {
        return 0;
    }
    if(dp[i][prev][t] != -1)
    {
        return dp[i][prev][t];
    }
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
    if(prev == 0)
    {
        p1 = 1 + fun(i + 1, i, true);
        p2 = fun(i + 1, 0, false);
        p1 = max(p1, p2);
    }
    else
    {
        if(E[prev].kg <= E[i].kg)
        {
            p3 = 1 + fun(i + 1, i, true);
        }
        p4 = fun(i + 1, prev, t);
        p3 = max(p3, p4);
    }
    return dp[i][prev][t] = max(p1, p3);
}
int fun2(int i, int prev, bool t)
{
    if(i > id)
    {
        return 0;
    }
    if(dp2[i][prev][t] != -1)
    {
        return dp2[i][prev][t];
    }
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0;
    if(prev == 0)
    {
        p1 = 1 + fun2(i + 1, i, true);
        p2 = fun2(i + 1, 0, false);
        p1 = max(p1, p2);
    }
    else
    {
        if(E2[prev].kg >= E2[i].kg)
        {
            p3 = 1 + fun2(i + 1, i, true);
        }
        p4 = fun2(i + 1, prev, t);
        p3 = max(p3, p4);
    }
    return dp2[i][prev][t] = max(p1, p3);
}
int main()
{
    //READ;
    mem(dp, -1);
    mem(dp2, -1);
    id = 1;
    int x, y;
    while(sf("%d %d", &x, &y) == 2)
    {
        E[id].kg = x;
        E[id].iq = y;
        E[id].ser = id + 1;
        E2[id].kg = x;
        E2[id].iq = y;
        E2[id].ser = id;
        ++id;
    }
    sort(E + 1, E + id);
    sort(E2 + 1, E2 + id);
    x = fun(1, 0, false);
    y = fun2(1, 0, false);
    cout << max(x, y) << "\n";
    return 0;
}
