#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
vector<int> V[101];
bool vis[101];
int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n + m == 0)
            return 0;
        for(int i = 1; i <= n; ++i)
        {
            V[i].clear();
            vis[i] = false;
        }
        for(int i = 0; i < m; ++i)
        {
            int ii, jj;
            scanf("%d %d", &ii, &jj);
            V[jj].push_back(ii);
        }
        int C = n;
        while(C > 0)
        {
            for(int i = 1; i <= n; ++i)
            {
                if(vis[i])
                    continue;
                if(V[i].size() == 0)
                {
                    printf("%d", i);
                    if(C > 1)
                        printf(" ");
                    else
                        printf("\n");
                    vis[i] = true;
                    C--;
                    for(int j = 1; j <= n; ++j)
                    {
                        int len = V[j].size();
                        for(int k = 0; k < len; ++k)
                        {
                            if(V[j][k] == i)
                            {
                                V[j].erase(V[j].begin() + k);
                                break;
                            }
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
