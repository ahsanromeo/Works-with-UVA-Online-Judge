#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    for(int cas=1;cas<=T;++cas)
    {
        long long n;
        scanf("%lld", &n);
        long long mx=-10, in;
        while(n--)
        {
            scanf("%lld", &in);
            if(in>mx)
                mx=in;
        }
        printf("Case %d: %lld\n", cas, mx);
    }
    return 0;
}
