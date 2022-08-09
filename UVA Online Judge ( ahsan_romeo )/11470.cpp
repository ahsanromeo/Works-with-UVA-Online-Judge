#include <iostream>
#include <stdio.h>
#define lng long long
using namespace std;
int main()
{
    int n, cas=1;
    while(cin>>n&&n)
    {
        lng sq[n][n], i, j, k, t1, t2;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%lld",&sq[i][j]);
        printf("Case %d:",cas++);
        int sz;
        if(n%2)
            sz=(n+1)/2;
        else
            sz=n/2;
        lng sum;
        for(k=0,t1=0,t2=n;k<sz;k++,t1++,t2--)
        {
            sum=0;
            for(i=t1; i<t2; i++)
            {
                if(i==t1||i==(t2-1))
                    for(j=t1;j<t2;j++)
                        sum+=sq[i][j];
                else
                    sum+=(sq[i][t1]+sq[i][t2-1]);
            }
            printf(" %lld",sum);
        }
        printf("\n");
    }
}
