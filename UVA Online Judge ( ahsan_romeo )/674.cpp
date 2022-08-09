#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int make, coin[5] = {1, 5, 10, 25, 50}, dp[6][7491];
int fun(int i, int a)
{
    if(i >= 5)
        return a == 0 ? 1 : 0;
    if(dp[i][a] != -1)
        return dp[i][a];
    int ret1 = 0, ret2 = 0;
    if(a - coin[i] >= 0)
        ret1 = fun(i, a - coin[i]);
    ret2 = fun(i + 1, a);
    return dp[i][a] = ret1 + ret2;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    while(scanf("%d", &make) == 1)
    {
        printf("%d\n", fun(0, make));
    }
    return 0;
}
