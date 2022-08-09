#include <iostream>
#include <stdio.h>
using namespace std;
#define lng long long
lng isp(lng n);
lng euler(lng n);
void gnrt(lng n);
int pre[10010];
int main()
{
    gnrt(10008);
    lng a, b;
    while(scanf("%lld %lld", &a, &b)==2)
    {

        lng m;
        if(a>b)
        {
            m=a;
            a=b;
            b=m;
        }
        m=b+1-a;
        lng c=0;
        for(lng i=a;i<=b;i++)
            c+=pre[i];
        //double p=(100*c/(m*1.0));
        double p=(c * 100.0) / (double)(b - a + 1) + 1e-9;
        printf("%0.2lf\n",p);
    }
}
lng isp(lng n)
{
    if(n==0||n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;
    return 1;
}
lng euler(lng n)
{
    return n*n+n+41;
}
void gnrt(lng n)
{
    for(lng i=0;i<=n;i++)
        pre[i]=isp(euler(i));
}
//(c * 100.0) / (double)(b - a + 1) + 1e-9
