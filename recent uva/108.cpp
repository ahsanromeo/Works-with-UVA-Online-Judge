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
int mat[101][101], sum[101][101];
int main()
{
    int N;
    while(sf("%d", &N) == 1)
    {
        mem(sum, 0);
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
                        int x = sum[k][l] - sum[i - 1][l] - sum[k][j - 1] + sum[i - 1][j - 1];
                        ans = max(ans, x);
                    }
                }
            }
        }
        pf("%d\n", ans);
    }
    return 0;
}
