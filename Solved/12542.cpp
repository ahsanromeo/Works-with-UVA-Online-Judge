#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
using namespace std;
typedef long long lng;
bool flag[100002];
void seive(lng n)
{
    memset(flag, true, sizeof(flag));
    flag[0] = flag[1] = false;
    lng s = sqrt(n);
    for(lng i = 2; i <= s; ++i)
    {
        if(flag[i])
        {
            for(lng j = i + i; j <= n; j += i)
            {
                flag[j] = false;
            }
        }
    }
}
int main()
{
    seive(100000);
    char s[260], w[7];
    while(scanf("%s", s))
    {
        int len = strlen(s);
        if(len == 1 && s[0] == 48)
            return 0;
        lng num, mx = -2;
        for(int i = 0; i < len; ++i)
        {
            w[0] = s[i];
            w[1] = 0;
            num = atoll(w);
            if(flag[num])
                mx = max(mx, num);
            if(i + 1 < len)
            {
                w[0] = s[i];
                w[1] = s[i + 1];
                w[2] = 0;
                num = atoll(w);
                if(flag[num])
                    mx = max(mx, num);
                if(i + 2 < len)
                {
                    w[0] = s[i];
                    w[1] = s[i + 1];
                    w[2] = s[i + 2];
                    w[3] = 0;
                    num = atoll(w);
                    if(flag[num])
                        mx = max(mx, num);
                    if(i + 3 < len)
                    {
                        w[0] = s[i];
                        w[1] = s[i + 1];
                        w[2] = s[i + 2];
                        w[3] = s[i + 3];
                        w[4] = 0;
                        num = atoll(w);
                        if(flag[num])
                            mx = max(mx, num);
                        if(i + 4 < len)
                        {
                            w[0] = s[i];
                            w[1] = s[i + 1];
                            w[2] = s[i + 2];
                            w[3] = s[i + 3];
                            w[4] = s[i + 4];
                            w[5] = 0;
                            num = atoll(w);
                            if(flag[num])
                                mx = max(mx, num);
                        }
                    }
                }
            }
        }
        printf("%lld\n", mx);
    }
    return 0;
}
