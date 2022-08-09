/*#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int coins[]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261}, i;
    unsigned long long ways[10005]={1};
    long long j, n;
    for(i=0;i<21;++i)
        for(j=0;j<10005;++j)
            ways[coins[i]+j]+=ways[j];
    while(scanf("%lld",&n)==1)
        cout<<ways[n]<<endl;
    return 0;
}
*/

#include <stdio.h>
#define N 10005
unsigned long long int ways[N];
int coins[21];
int main()
{
    int i,j;
    for(j=0;j<N;j++)ways[j]=0;
    ways[0]=1;
    for(i=1;i<=21;i++)
        coins[i-1]=i*i*i;
    for(i=0;i<21;i++)
        for(j=0;j<N;j++)
            if(j>=coins[i])
                ways[j]+=ways[j-coins[i]];
    while(scanf("%d",&i)==1)
        printf("%llu\n",ways[i]);
    return 0;
}
