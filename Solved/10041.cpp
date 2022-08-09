#include <iostream>
#include <cstdio>
using namespace std;
int pos[501];
int abs(int a, int b)
{
    return a > b ? a - b : b - a;
}
int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        long long d = 1000000000LL;
        int n; scanf("%d", &n);
        for(int i = 0; i < n; ++i)
            scanf("%d", pos + i);
        for(int i = 0; i < n; ++i)
        {
            long long temp = 0LL;
            for(int j = 0; j < n; ++j)
            {
                temp += abs(pos[i], pos[j]);
            }
            d = min(d, temp);
        }
        printf("%lld\n", d);
    }
    return 0;
}
