#include <stdio.h>
#define sz 30002
int coins[]={1,5,10,25,50};
long long i, j, ways[sz];
int main()
{
    ways[0]=1;
    for(i=0;i<5;++i)
        for(j=0;j<sz;++j)
            ways[coins[i]+j]+=ways[j];
    while(scanf("%lld",&i)!=EOF)
    {
        if(ways[i]>1)
            printf("There are %lld ways to produce %lld cents change.\n",ways[i],i);
        else
            printf("There is only 1 way to produce %lld cents change.\n",i);
    }
    return 0;
}
