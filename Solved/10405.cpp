#include <iostream>
#include <stdio.h>
using namespace std;
string s1, s2;
int m, n;
int LCS()
{
    int LS[m+1][n+1], i, j;
    for(i=0;i<=m;++i)
    {
        for(j=0;j<=n;++j)
        {
            if(i==0||j==0)
                LS[i][j]=0;
            else if(s1[i-1]==s2[j-1])
                LS[i][j]=1+LS[i-1][j-1];
            else
                LS[i][j]=max(LS[i-1][j],LS[i][j-1]);
        }
    }
    return LS[m][n];
}
int main()
{
    while(getline(cin,s1))
    {
        m=s1.size();
        getline(cin,s2);
        n=s2.size();
        int L=LCS();
        printf("%d\n", LCS());
    }
    return 0;
}
