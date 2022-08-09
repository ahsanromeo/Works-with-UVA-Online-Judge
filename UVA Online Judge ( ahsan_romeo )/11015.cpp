#include <iostream>
#include <cstdio>
using namespace std;
typedef long long lng;
#define INF 30000
int mat[24][24];
void clear()
{
    for(int i = 0; i < 24; ++i)
        for(int j = 0; j < 24; ++j)
            mat[i][j] = i == j ? 0 : INF;
}
int main()
{
    int N, M, cas = 1;
    while(scanf("%d", &N) == 1)
    {
        if(N == 0)
            return 0;
        scanf("%d", &M);
        clear();
        string nam[N + 1];
        for(int i = 1; i <= N; ++i)
        {
            cin >> nam[i];
        }
        int si, sj, sk;
        for(int i = 1; i <= M; ++i)
        {
            scanf("%d %d %d", &si, &sj, &sk);
            mat[si][sj] = mat[sj][si] = sk;
        }
        for(int k = 1; k <= N; ++k)
            for(int i = 1; i <= N; ++i)
                for(int j = 1; j <= N; ++j)
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
        lng mn = 2147483647;
        int p = 1;
        for(int i = 1; i <= N; ++i)
        {
            lng tot = 0;
            for(int j = 1; j <= N; ++j)
            {
                tot += mat[i][j];
            }
            if(tot < mn)
            {
                mn = tot;
                p = i;
            }
        }
        printf("Case #%d : ", cas++);
        cout << nam[p] << "\n";
    }
    return 0;
}
