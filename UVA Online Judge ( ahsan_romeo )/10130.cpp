#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define mem(A,V) memset(A, V, sizeof(A));
#define read freopen("in.txt", "r", stdin);
#define write freopen("out.txt", "w", stdout);
const int MAX_W = 31, MAX_N = 1001;
int dp[MAX_N][MAX_W], weight[MAX_N], cost[MAX_N], n, W;
int fun(int i, int w)
{
    if(i > n)
        return 0;
    if(dp[i][w] != -1)
        return dp[i][w];
    int p1 = 0, p2 = 0;
    if(weight[i] + w <= W)
    {
        p1 = cost[i] + fun(i + 1, weight[i] + w);
    }
    p2 = fun(i + 1, w);
    return dp[i][w] = max(p1, p2);
}
int main()
{
    //read;
    //write;
    int T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        for(int i = 1; i <= n; ++i)
            scanf("%d %d", cost + i, weight + i);
        int G, ans = 0;
        scanf("%d", &G);
        while(G--)
        {
            mem(dp, -1);
            scanf("%d", &W);
            ans += fun(1, 0);
        }
        printf("%d\n", ans);
    }
    return 0;
}
