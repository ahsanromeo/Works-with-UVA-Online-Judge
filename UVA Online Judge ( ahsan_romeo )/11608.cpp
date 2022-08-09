#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, cas = 1;
    while(scanf("%d", &s) == 1)
    {
        if(s < 0)
            return 0;
        int pro[12], need[12];
        for(int i = 0; i < 12; ++i)
            scanf("%d", pro + i);
        for(int i = 0; i < 12; ++i)
            scanf("%d", need + i);
        printf("Case %d:\n", cas++);
        if(need[0] > s)
        {
            puts("No problem. :(");
            pro[0] += s;
        }
        else
        {
            puts("No problem! :D");
            pro[0] += (s - need[0]);
        }
        for(int i = 1; i < 12; ++i)
        {
            if(need[i] > pro[i - 1])
            {
                puts("No problem. :(");
                pro[i] += pro[i - 1];
            }
            else
            {
                puts("No problem! :D");
                pro[i] += (pro[i - 1] - need[i]);
            }
        }
    }
    return 0;
}
