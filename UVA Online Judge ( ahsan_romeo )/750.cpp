#include <bits/stdc++.h>
using namespace std;
int abs(int a, int b)
{
    return a > b ? a - b : b - a;
}
int colp[9];
bool place(int row, int col)
{
    for(int i = 1; i < col; ++i)
    {
        if(colp[i] == row || abs(colp[i], row) == abs(i, col))
            return false;
    }
    return true;
}
map<vector<int> , bool> mp;
vector<int> vt;
void nqueen(int col)
{
    if(col > 8)
        return;
    for(int r = 1; r <= 8; ++r)
    {
        if(place(r, col))
        {
            colp[col] = r;
            if(col == 8)
            {
                vt.clear();
                for(int k = 1; k <= 8; ++k)
                    vt.push_back(colp[k]);
                mp[vt] = true;
            }
            nqueen(col + 1);
        }
    }
}
int main()
{
    nqueen(1);
    int r, c, T;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &r, &c);
        puts("SOLN       COLUMN");
        puts(" #      1 2 3 4 5 6 7 8\n");
        int ln = 1;
        for(map<vector<int> , bool>:: iterator it = mp.begin(); it != mp.end(); it++)
        {
            vt = it -> first;
            int len = vt.size();
            if(vt[c - 1] == r)
            {
                printf("%2d      ", ln++);
                for(int i = 0; i < len; ++i)
                {
                    if(i)
                        putchar(' ');
                    printf("%d", vt[i]);
                }
                puts("");
            }
        }
        if(T)
            puts("");
    }
    return 0;
}
