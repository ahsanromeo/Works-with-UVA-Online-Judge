#include <iostream>
#include <cstdio>
using namespace std;
int dev[21];
bool state[21];
int main()
{
    int n, m, c, in, cas = 1;
    while(scanf("%d %d %d", &n, &m, &c) == 3)
    {
        if(n + m + c == 0)
            return 0;
        int curr = 0, mx = 0;
        bool ok = true;
        for(int i = 1; i <= n; ++i)
        {
            scanf("%d", dev + i);
            state[i] = false;
        }
        for(int i = 1; i <= m; ++i)
        {
            scanf("%d", &in);
            if(state[in])
            {
                state[in] = false;
                curr -= dev[in];
            }
            else
            {
                state[in] = true;
                curr += dev[in];
                mx = max(mx, curr);
                if(curr > c)
                {
                    ok = false;
                }
            }
        }
        printf("Sequence %d\n", cas++);
        if(ok)
        {
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n", mx);
        }
        else
        {
            printf("Fuse was blown.\n\n");
        }
    }
    return 0;
}
