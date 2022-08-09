#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
#define INF 30000
map<int, int> mp;
int mat[111][111];
void clear()
{
    for(int i = 0; i < 111; ++i)
        for(int j = 0; j < 111; ++j)
            mat[i][j] = i == j ? 0 : INF;
}
int main()
{
    int a, b, cas = 1;
    while(scanf("%d %d", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
            return 0;
        clear();
        mp.clear();
        int ass = 1;
        if(mp.find(a) == mp.end())
        {
            mp[a] = ass++;
        }
        if(mp.find(b) == mp.end())
        {
            mp[b] = ass++;
        }
        mat[mp[a]][mp[b]] = 1;
        while(true)
        {
            scanf("%d %d", &a, &b);
            if(a == 0 && b == 0)
                break;
            if(mp.find(a) == mp.end())
            {
                mp[a] = ass++;
            }
            if(mp.find(b) == mp.end())
            {
                mp[b] = ass++;
            }
            mat[mp[a]][mp[b]] = 1;
        }
        for(int k = 1; k < ass; ++k)
            for(int i = 1; i < ass; ++i)
                for(int j = 1; j < ass; ++j)
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
        double cnt = 0.0, tot = 0.0;
        for(int i = 1; i < ass; ++i)
            for(int j = 1; j < ass; ++j)
            {
                if(i == j)
                    continue;
                tot += (double)(mat[i][j] * 1.0);
                cnt += (double)(1.0);
            }
        printf("Case %d: average length between pages = %0.3lf clicks\n", cas++, (double)(tot/cnt * 1.0));
    }
    return 0;
}
