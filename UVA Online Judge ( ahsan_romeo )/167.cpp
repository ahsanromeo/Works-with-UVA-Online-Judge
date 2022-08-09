#include <bits/stdc++.h>
using namespace std;
int abs(int a, int b)
{
    return a > b ? a - b : b - a;
}
int mat[8][8], rop[8], ans;
bool place(int row, int col)
{
    for(int i = 0; i < row; ++i)
    {
        if(rop[i] == col || abs(row, i) == abs(col, rop[i]))
            return false;
    }
    return true;
}
void nqueen(int row)
{
    if(row >= 8)
        return;
    for(int c = 0; c < 8; ++c)
    {
        if(place(row, c))
        {
            rop[row] = c;
            if(row == 7)
            {
                int w = 0;
                for(int k = 0; k < 8; ++k)
                    w += mat[k][rop[k]];
                ans = max(ans, w);
            }
            nqueen(row + 1);
        }
    }
}
int main()
{
    int K;
    scanf("%d", &K);
    while(K--)
    {
        for(int i = 0; i < 8; ++i)
            for(int j = 0; j < 8; ++j)
                scanf("%d", mat[i] + j);
        ans = 0;
        nqueen(0);
        printf("%5d\n", ans);
    }
    return 0;
}
