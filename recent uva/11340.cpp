#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long lng;
int mp[356];
int main()
{
    int N, K, V;
    lng M;
    char C, line[10005];
    scanf("%d", &N);
    while(N--)
    {
        scanf("%d", &K);
        memset(mp, 0, sizeof(mp));
        while(K--)
        {
            cin >> C >> V;
            mp[C] = V;
        }
        double cnt = 0;
        scanf("%lld", &M);
        getchar();
        while(M--)
        {
            gets(line);
            for(int i = 0; line[i]; ++i)
            {
                cnt += mp[line[i]];
            }
        }
        printf("%0.2lf$\n", cnt/100.0);
    }
    return 0;
}
