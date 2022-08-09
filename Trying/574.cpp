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
#define all(x) x.begin(), w.end()
#define mem(x, y) memset(x, y, sizeof(x));
#define rep(i, x) for(int i = 0; i < x; ++i)
#define rep1(i, x) for(int i = 1; i <= x; ++i)
#define READ freopen("in.txt", "r", stdin);
#define WRITE freopen("out.txt", "w", stdout);
int main()
{
    int t, n, arr[12];
    vi vp;
    while(sf("%d %d", &t, &n) == 2)
    {
        if(n == 0)
            return 0;
        rep(i, n)
            sf("%d", arr + i);
        int cnt = 0, k = 1 << n;
        pf("Sums of %d:\n", t);
        rep(i, k)
        {
            int s = 0;
            vp.clear();
            rep(j, n)
            {
                if(i & (1 << j))
                {
                    s += arr[j];
                    vp.pb(arr[j]);
                }
            }
            if(s == t)
            {
                int len = vp.size();
                rep(m, len)
                {
                    if(m)
                        pf("+");
                    pf("%d", vp[m]);
                }
                pf("\n");
            }
        }
    }
    return 0;
}
