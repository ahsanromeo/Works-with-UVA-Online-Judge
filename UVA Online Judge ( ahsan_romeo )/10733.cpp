#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
int main()
{
    lng n;
    while(scanf("%lld", &n) == 1)
    {
        if(n == 0)
            return 0;
        printf("%lld\n", (n * n * n * n * n * n + 3 * n * n * n * n + 12 * n * n * n + 8 * n * n) / 24);
    }
}
