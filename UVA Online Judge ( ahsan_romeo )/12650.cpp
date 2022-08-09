#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long i64;
bool ok[10010];
int main()
{
    i64 N, R, in;
    while(scanf("%lld %lld", &N, &R)==2)
    {
        if(R>=N)
        {
            printf("*\n");
            while(R--)
                scanf("%lld", &in);
            continue;
        }
        memset(ok,true,sizeof(ok));
        for(i64 I=0;I<R;++I)
        {
            scanf("%lld", &in);
            ok[in]=false;
        }
        for(i64 I=1;I<=N;++I)
        {
            if(ok[I])
                printf("%lld ", I);
        }
        printf("\n");
    }
    return 0;
}
