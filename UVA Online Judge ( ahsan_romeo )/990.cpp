#include <bits/stdc++.h>
using namespace std;
int t, w, n, dp[31][1001], pd[31][1001];
pair < int, int > treaser [31];
vector < pair < int, int > > ans;
int call(int i, int time)
{
    if(i >= n)
        return 0;
    int& ret = dp[i][time];
    if(ret != -1)
        return ret;
    int p1 = 0;
    if(time + treaser[i].first * 3 * w <= t)
        p1 = treaser[i].second + call(i + 1, time + treaser[i].first * 3 * w);
    int p2 = call(i + 1, time);
    if(p1 > p2)
    {
        pd[i][time] = 1;
        return ret = p1;
    }
    else
    {
        pd[i][time] = 2;
        return ret = p2;
    }
}
void print(int i, int time)
{
    if(pd[i][time] == -1)
        return;
    if(pd[i][time] == 1)
    {
        ans.push_back({treaser[i].first, treaser[i].second});
        print(i + 1, time + treaser[i].first * 3 * w);
    }
    else
        print(i + 1, time);
}
int main()
{
    bool nl = false;
    while(scanf("%d %d %d", &t, &w, &n) == 3)
    {
        memset(dp, -1, sizeof dp);
        memset(pd, -1, sizeof pd);
        ans.clear();
        for(int i = 0; i < n; ++i)
            scanf("%d %d", &treaser[i].first, &treaser[i].second); /// depth, quantity
        if(nl)
            puts("");
        nl = true;
        printf("%d\n", call(0, 0));
        print(0, 0);
        int len = ans.size();
        printf("%d\n", len);
        for(int i = 0; i < len; ++i)
            printf("%d %d\n", ans[i].first, ans[i].second);
    }
    return 0;
}
