#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long lng;
int P[100005], arr[100005];
int main()
{
    //freopen("in.txt", "r", stdin);
    int T, n, q, in, mx, a, b;
    scanf("%d", &T);
    for(int cas = 1; cas <= T; ++cas)
    {
        printf("Case %d:\n", cas);
        memset(arr, 0, sizeof(arr));
        memset(P, 0, sizeof(P));
        scanf("%d %d", &n, &q);
        mx = 0;
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &in);
            ++P[in];
            if(in > mx)
                mx = in;
        }
        arr[0] = P[0];
        for(int i = 1; i <= mx; ++i)
        {
            arr[i] = arr[i - 1] + P[i];
        }
        while(q--)
        {
            scanf("%d %d", &a, &b);
            if(a > b)
                swap(a, b);
            if(b > mx)
                b = mx;
            if(a > mx)
                a = mx;
            if(a > 0)
            {
                in = arr[b] - arr[a - 1];
            }
            else
            {
                in = arr[b];
            }
            printf("%d\n", in);
        }
    }
    return 0;
}
