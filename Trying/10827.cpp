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
#define INF 2147483646
int mat[77][77], sum[77][77];
int main()
{
    //READ;
    int T;
    sf("%d", &T);
    while(T--)
    {
        int N;
        mem(sum, 0);
        sf("%d", &N);
        rep1(i, N)
        {
            rep1(j, N)
            {
                sf("%d", &mat[i][j]);
                if(i == 1)
                {
                    sum[i][j] = mat[i][j] + sum[i][j - 1];
                }
                else
                {
                    sum[i][j] = mat[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
                }
            }
        }
        lng ans = -INF;
        for(int i = 1; i <= N; ++i)
        {
            for(int j = 1; j <= N; ++j)
            {
                for(int k = i; k <= N; ++k)
                {
                    for(int l = j; l <= N; ++l)
                    {
                        lng x = sum[k][l] - sum[i - 1][l] - sum[k][j - 1] + sum[i - 1][j - 1];
                        ans = max(ans, x);
                    }
                }
            }
        }
        //pf("%lld\n", ans);
        for(int i1 = 1; i1 <= N; ++i1)
        {
            for(int i2 = i1; i2 <= N; ++i2)
            {
                for(int j = 1; j <= N - 2; ++j)
                {
                    for(int j2 = j + 2; j2 <= N; ++j2)
                    {
                        lng x = sum[i2][j] - sum[i1 - 1][j];
                        lng y = sum[i2][N] - sum[i2][j2 - 1] - sum[i1 - 1][N] + sum[i1 - 1][j2 - 1];
                        ans = max(ans, x + y);
                    }
                }
            }
        }
        //pf("%lld\n", ans);
        for(int j1 = 1; j1 <= N; ++j1)
        {
            for(int j2 = j1; j2 <= N; ++j2)
            {
                for(int i = 1; i <= N - 2; ++i)
                {
                    for(int i2 = i + 2; i2 <= N; ++i2)
                    {
                        lng x = sum[i][j2] - sum[i][j1 - 1];
                        lng y = sum[N][j2] - sum[i2 - 1][j2] - sum[N][j1 - 1] + sum[i2 - 1][j1 - 1];
                        ans = max(ans, x + y);
                    }
                }
            }
        }
        pf("%lld\n", ans);
    }
    return 0;
}
