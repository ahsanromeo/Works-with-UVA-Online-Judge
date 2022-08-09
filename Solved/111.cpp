#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;
int correct[21], A[21], DP[21][21], n;
bool vis[21][21];
int LCS(int i, int j)
{
    if(i == n || j == n)
        return 0;
    if(vis[i][j])
        return DP[i][j];
    vis[i][j] = true;
    int ans = 0;
    if(correct[i] == A[j])
        ans = 1 + LCS(i + 1, j + 1);
    else
        ans = max(LCS(i + 1, j), LCS(i, j + 1));
    return DP[i][j] = ans;
}
int main()
{
    //freopen("in.txt", "r", stdin);
    scanf("%d", &n);
    int xx;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &xx);
        correct[xx] = i;
    }
    string line;
    getchar();
    while(getline(cin, line))
    {
        //vpr.clear();
        stringstream ss(line);
        memset(DP, 0, sizeof(DP));
        memset(vis, false, sizeof(vis));
        int y = 0;
        for(int i = 0; i < n; ++i)
        {
            ss >> xx;
            A[xx] = y++;
        }
        printf("%d\n", LCS(0, 0));
        //printAll(0, 0);
    }
    return 0;
}
/*vector<int> vpr;
void printAll(int i, int j)
{
    if(i == n || j == n)
    {
        for(int k = 0; k < vpr.size(); ++k)
            cout << vpr[k] << " ";
        cout << endl;
        return;
    }
    if(correct[i] == A[j])
    {
        vpr.push_back(A[j]);
        printAll(i + 1, j + 1);
        vpr.erase(vpr.end() - 1);
        return;
    }
    if(DP[i + 1][j] > DP[i][j + 1])
        printAll(i + 1, j);
    else if(DP[i + 1][j] < DP[i][j + 1])
        printAll(i, j + 1);
    else
    {
        printAll(i + 1, j);
        printAll(i, j + 1);
    }
}*/
