#include <iostream>
#include <cstdio>
using namespace std;
typedef long long lng;
lng arr[20], mul[20];
int Main()
{
    int N, cas = 1;
    while(scanf("%d", &N) == 1)
    {
        lng ans = 0;
        for(int i = 0; i < N; ++i)
        {
            scanf("%lld", arr + i);
            if(i == 0)
                mul[0] = arr[0];
            else
                mul[i] = mul[i - 1] * arr[i];
            ans = max(ans, arr[i]);
        }
        for(int i = 0; i < N; ++i)
        {
            for(int j = i + 1; j < N; ++j)
            {
                if(i > 0)
                    ans = max(ans, mul[j] / mul[i - 1]);
                else
                    ans = max(ans, mul[j]);
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n", cas++, ans);
    }
    return 0;
}
int main()
{
    int N, cas = 1;
    while(scanf("%d", &N) == 1)
    {
        lng ans = 0;
        for(int i = 0; i < N; ++i)
        {
            scanf("%lld", arr + i);
            ans = max(ans, arr[i]);
        }
        for(int i = 0; i < N; ++i)
        {
            lng x = arr[i];
            for(int j = i + 1; j < N; ++j)
            {
                x *= arr[j];
                ans = max(ans, x);
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n", cas++, ans);
    }
    return 0;
}
