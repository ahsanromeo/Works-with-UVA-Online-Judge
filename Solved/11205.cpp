#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
typedef long long lng;
int mat[101][17];
map<int, int>mp;
int main()
{
    int T;
    scanf("%d", &T);
    int w;
    while(T--)
    {
        int N, P;
        scanf("%d %d", &P, &N);
        for(int i = 0; i < N; ++i)
        {
            for(int j = 0; j < P; ++j)
            {
                scanf("%d", &mat[i][j]);
            }
        }
        int k = 1 << P;
        lng ans = 2147483640;
        for(int i = 0; i < k; ++i)
        {
            lng cnt = 0;
            mp.clear();
            for(int x = 0; x < N; ++x)
            {
                w = 0;
                cnt = 0;
                for(int j = 0; j < P; ++j)
                {
                    if((1 << j) & i)
                    {
                        ++cnt;
                        if(mat[x][j] == 1)
                        {
                            w |= (1 << j);
                        }
                        else
                        {
                            w &= ~(1 << j);
                        }
                    }
                }
                mp[w] = 1;
            }
            if(mp.size() == N)
            {
                ans = min(ans, cnt);
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}
