#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
int mp[10010];
int main()
{
    int N, Q, s, C = 1;
    while(scanf("%d %d", &N, &Q) == 2)
    {
        if(N + Q == 0)
            return 0;
        memset(mp, 0, sizeof(mp));
        int rr[N];
        for(int i = 0; i < N; ++i)
            scanf("%d", rr + i);
        sort(rr, rr + N);
        for(int i = 0; i < N ; ++i)
            if(mp[rr[i]] == 0)
                mp[rr[i]] = i + 1;
        printf("CASE# %d:\n", C++);
        while(Q--)
        {
            scanf("%d", &s);
            if(mp[s] == 0)
                printf("%d not found\n", s);
            else
                printf("%d found at %d\n", s, mp[s]);
        }
    }
    return 0;
}
