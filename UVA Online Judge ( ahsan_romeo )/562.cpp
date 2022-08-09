#include <bits/stdc++.h>
using namespace std;
int m, arr[101], tot, dp[101][50001];
int call(int i, int sum)
{
    if(i >= m)
    {
        return abs(sum - abs(tot - sum));
    }
    int& ret = dp[i][sum];
    if(ret != -1)
        return ret;
    return ret = min(call(i + 1, sum), call(i + 1, sum + arr[i]));
}
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &m);
        tot = 0;
        for(int i = 0; i < m; ++i)
        {
            scanf("%d", arr + i);
            tot += arr[i];
        }
        memset(dp, -1, sizeof dp);
        printf("%d\n", call(0, 0));
    }
    return 0;
}
