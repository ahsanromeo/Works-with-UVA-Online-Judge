#include <stdio.h>
int main()
{
    long long a, b, c, n, f, x;
    while(scanf("%lld",&n)==1)
    {
        while(n--)
        {
            scanf("%lld",&f);
            x=0;
            while(f--)
            {
                scanf("%lld %lld %lld",&a,&b,&c);
                x+=(a*c);
            }
            printf("%lld\n",x);
        }
    }
    return 0;
}
