#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long lng;
int LCS(lng a[], lng b[], int m, int n)
{
    int L[m+1][n+1];
    for(int i=0;i<=m;++i)
    {
        for(int j=0;j<=n;++j)
        {
            if(i==0||j==0)
                L[i][j]=0;
            else if(a[i-1]==b[j-1])
                L[i][j]=L[i-1][j-1]+1;
            else
                L[i][j]=max(L[i-1][j],L[i][j-1]);
        }
    }
    return L[m][n];
}
int N1, N2, A[101], B[101], DP[101][101];
bool vis[101][101];
int LCS2(int i, int j)
{
    if(i == N1 || j ==  N2)
        return 0;
    if(vis[i][j])
        return DP[i][j];
    vis[i][j] = true;
    int ans = 0;
    if(A[i] == B[j])
        ans = 1 + LCS2(i + 1, j + 1);
    else
        ans = max(LCS2(i + 1, j), LCS2(i, j + 1));
    return DP[i][j] = ans;
}
int main()
{
    int cas = 1;
    while(scanf("%d %d", &N1, &N2) == 2)
    {
        if(N1 + N2 == 0)
            return 0;
        for(int i = 0; i < N1; ++i)
            scanf("%d", A + i);
        memset(DP, 0, sizeof(DP));
        memset(vis, false, sizeof(vis));
        for(int i = 0; i < N2; ++i)
            scanf("%d", B + i);
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n", cas++, LCS2(0, 0));
    }
    return 0;
}
int Main()
{
    int n1, n2, cas=1;
    while(scanf("%d %d", &n1, &n2)==2)
    {
        if(n1==n2&&n1==0)
            break;
        lng t1[n1+1], t2[n2+1];
        for(int i=0;i<n1;++i)
            scanf("%lld", &t1[i]);
        for(int i=0;i<n2;++i)
            scanf("%lld", &t2[i]);
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n", cas++, LCS(t1,t2,n1,n2));
    }
    return 0;
}
