#include <iostream>
#include <cstdio>
using namespace std;
#define INF 30000
int mat[81][81], feast[81], tak[81][81];
int main()
{
    //freopen("infloy.txt", "r", stdin);
    int C, R, Q, cas = 1;
    bool pri = false;
    while(scanf("%d %d %d", &C, &R, &Q) == 3)
    {
        if(C + R + Q == 0)
            return 0;
        for(int i = 0; i < 81; ++i)
        {
            feast[i] = 0;
            for(int j = 0; j < 81; ++j)
            {
                mat[i][j] = i == j ? 0 : INF;
                tak[i][j] = 0;
            }
        }
        for(int i = 1; i <= C; ++i)
            scanf("%d", &feast[i]);
        int c1, c2, d;
        for(int i = 0; i < R; ++i)
        {
            scanf("%d %d %d", &c1, &c2, &d);
            mat[c1][c2] = mat[c2][c1] = d;
        }
        for(int i = 1; i <= C; ++i)
        {
            for(int j = 1; j <= C; ++j)
            {
                tak[i][j] = tak[j][i] = max(feast[i], feast[j]);
            }
        }
        for(int k = 1; k <= C; ++k)
        {
            for(int i = 1; i <= C; ++i)
            {
                for(int j = 1; j <= C; ++j)
                {
                    int temp = max(tak[i][k], tak[k][j]);
                    if(temp + mat[i][k] + mat[k][j] < mat[i][j] + tak[i][j])
                    {
                        mat[i][j] = mat[i][k] + mat[k][j];
                        tak[i][j] = temp;
                    }
                }
            }
        }
        for(int k = 1; k <= C; ++k)
        {
            for(int i = 1; i <= C; ++i)
            {
                for(int j = 1; j <= C; ++j)
                {
                    int temp = max(tak[i][k], tak[k][j]);
                    if(temp + mat[i][k] + mat[k][j] < mat[i][j] + tak[i][j])
                    {
                        mat[i][j] = mat[i][k] + mat[k][j];
                        tak[i][j] = temp;
                    }
                }
            }
        }
        if(pri)
            printf("\n");
        pri = true;
        printf("Case #%d\n", cas++);
        while(Q--)
        {
            scanf("%d %d", &c1, &c2);
            if(mat[c1][c2] != INF)
                printf("%d\n", mat[c1][c2] + tak[c1][c2]);
            else
                printf("-1\n");
        }
    }
    return 0;
}
