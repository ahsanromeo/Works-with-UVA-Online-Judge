#include <stdio.h>
typedef long long lng;
lng cyc(lng n);
lng pre[1000001]={0};
int main()
{
    lng i, m, n, mx, c;
    while(scanf("%lld %lld", &m, &n)==2)
    {
        printf("%lld %lld ", m, n);
        if(m>n)
        {
            m=m+n;
            n=m-n;
            m=m-n;
        }
        mx=-1;
        for(i=m;i<=n;++i)
        {
            if(pre[i]==0)
                pre[i]=cyc(i);
            c=pre[i];
            if(c>mx)
                mx=c;
        }
        printf("%lld\n", mx);
    }
    return 0;
}
lng cyc(lng n)
{
    lng c=0;
    while(true)
    {
        if(n==1)
        {
            ++c;
            break;
        }
        if(n%2==0)
            n/=2;
        else
            n=1+3*n;
        ++c;
    }
    return c;
}
