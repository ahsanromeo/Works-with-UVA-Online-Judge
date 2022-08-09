#include <stdio.h>
int main()
{
    long long l, s, n, i, a, u, tc=1, t;
    while(scanf("%lld %lld", &l, &s)==2)
    {
        if(l==0&&s==0)
            break;
        u=27-l;
        a=0;
        for(i=1;i<=u;i++)
        {
            t=(l*(l+2*i-1))/2;
            if(t==s)
                a++;
        }
        printf("Case %lld\n",tc++,a);
    }
}
