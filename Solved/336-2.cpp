#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
int NC;
int par[40];
map<int, int>mp;
int find(int r)
{
    if(par[r] == r)
        return r;
    return par[r] = find(par[r]);
}
void join(int a, int b)
{
    int u = find(a);
    int v = find(b);
    if(u == v)
        return;
    par[u] = v;
}
bool check(int a, int b)
{
    int u = find(a);
    int v = find(b);
    return u == v;
}
int main()
{
    //freopen("in336.txt", "r", stdin);
    int cas = 1;
    while(scanf("%d", &NC) == 1)
    {
        if(NC == 0)
            return 0;
        mp.clear();
        int ass = 1, store[NC][2];
        for(int i = 0; i < NC; ++i)
        {
            scanf("%d %d", &store[i][0], &store[i][1]);
            if(mp.find(store[i][0]) == mp.end())
            {
                mp[store[i][0]] = ass++;
                par[ass-1] = ass - 1;
            }
            if(mp.find(store[i][1]) == mp.end())
            {
                mp[store[i][1]] = ass++;
                par[ass-1] = ass - 1;
            }
        }
        int len = mp.size(), a, b;
        vector<int>V[len + 1];
        for(int i = 0; i < NC; ++i)
        {
            a = mp[store[i][0]];
            b = mp[store[i][1]];
            V[a].push_back(b);
            V[b].push_back(a);
            join(a, b);
        }
        int node, TTL, level[len + 1];
        bool flag[len + 1];
        for(;;)
        {
            scanf("%d %d", &node, &TTL);
            if(node == 0 && TTL == 0)
                break;
            int x = mp[node];
            int cnt = 0;
            for(int y = 1; y <= len; ++y)
            {
                if(x == y)
                {
                    continue;
                }
                if(!check(x, y))
                {
                    ++cnt;
                    continue;
                }
                memset(level, 0, sizeof(level));
                memset(flag, false, sizeof(flag));
                queue<int>q;
                q.push(x);
                flag[x] = true;
                bool ff = false;
                while(!q.empty())
                {
                    int s = q.front();
                    q.pop();
                    int len2 = V[s].size();
                    for(int j = 0; j < len2; ++j)
                    {
                        int m = V[s][j];
                        if(!flag[m])
                        {
                            flag[m] = true;
                            q.push(m);
                            level[m] = level[s] + 1;
                        }
                        if(m == y)
                        {
                            ff = true;
                            break;
                        }
                    }
                    if(ff)
                        break;
                }
                if(level[y] > TTL)
                {
                    ++cnt;
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", cas++, cnt, node, TTL);
        }
    }
    return 0;
}
