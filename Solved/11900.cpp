#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    for(int cas = 1; cas <= T; ++cas)
    {
        int n, P, Q;
        scanf("%d %d %d", &n, &P, &Q);
        int cnt = 0, tot = 0;
        int arr[n];
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        int i = 0;
        while(true)
        {
            if(cnt + 1 > P || tot + arr[i] > Q || i >= n)
                break;
            ++cnt;
            tot += arr[i++];
        }
        printf("Case %d: %d\n", cas, cnt);
    }
    return 0;
}
