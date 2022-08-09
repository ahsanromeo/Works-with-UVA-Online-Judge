#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
struct problem
{
    bool f1, f2, f3;
    problem()
    {
        f1 = f2 = f3 = false;
    }
};
map<int, problem> mp;
vector<int> V[4], out[4];
int main()
{
    int T, in;
    scanf("%d", &T);
    for(int cas = 1; cas <= T; ++cas)
    {
        mp.clear();
        for(int i = 1; i <= 3; ++i)
        {
            V[i].clear();
            out[i].clear();
            int n;
            scanf("%d", &n);
            while(n--)
            {
                scanf("%d", &in);
                if(i == 1)
                    mp[in].f1 = true;
                else if(i == 2)
                    mp[in].f2 = true;
                else
                    mp[in].f3 = true;
                V[i].push_back(in);
            }
        }
        int mx = 0;
        for(int i = 0; i < V[1].size(); ++i)
        {
            int w = V[1][i];
            if(mp[w].f2 == false && mp[w].f3 == false)
            {
                out[1].push_back(w);
            }
        }
        int len;
        len = out[1].size();
        mx = max(mx, len);
        for(int i = 0; i < V[2].size(); ++i)
        {
            int w = V[2][i];
            if(mp[w].f1 == false && mp[w].f3 == false)
            {
                out[2].push_back(w);
            }
        }
        len = out[2].size();
        mx = max(mx, len);
        for(int i = 0; i < V[3].size(); ++i)
        {
            int w = V[3][i];
            if(mp[w].f1 == false && mp[w].f2 == false)
            {
                out[3].push_back(w);
            }
        }
        len = out[3].size();
        mx = max(mx, len);
        printf("Case #%d:\n", cas);
        bool pri = true;
        for(int i = 1; i <= 3; ++i)
        {
            if(out[i].size() == mx)
            {
                printf("%d %d", i, mx);
                sort(out[i].begin(), out[i].end());
                for(int j = 0; j < mx; ++j)
                    printf(" %d", out[i][j]);
                printf("\n");
                pri = false;
            }
        }
        if(pri)
            printf("\n");
    }
    return 0;
}
