#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long lng;
int arr[4][4001];
lng sum[4000*4000 + 1], sum2[4000*4000 + 1];
int id;
int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int N;
    while(scanf("%d", &N) == 1)
    {
        id = 0;
        for(int i = 0; i < N; ++i)
            scanf("%d %d %d %d", &arr[0][i], &arr[1][i], &arr[2][i], &arr[3][i]);
        for(int i = 0; i < N; ++i)
        {
            for(int j = 0; j < N; ++j)
            {
                sum[id] = arr[0][i] + arr[1][j];
                sum2[id++] = arr[2][i] + arr[3][j];
            }
        }
        sort(sum, sum + id);
        sort(sum2, sum2 + id);
        for(int i = 0; i < id; ++i)
            cout << sum[i] << " ";
        cout << "\n";
        for(int i = 0; i < id; ++i)
            cout << sum2[i] << " ";
        cout << "\n";

        return 0;
        lng cnt = 0, s;
        for(int i = 0, j = id - 1;;)
        {
            //
            s = sum[i] + sum2[j];
            if(s > 0 && j >= 0)
            {
                --j;
            }
            else if(s < 0 && i < id - 1)
            {
                ++i;
            }
            else
            {
                ++cnt;
                --j;
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}
