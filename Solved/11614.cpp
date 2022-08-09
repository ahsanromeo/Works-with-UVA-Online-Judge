#include <stdio.h>
#include <math.h>
int main()
{
    long long n, t, ans, a;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld", &n);
        a=8.0*(double)n;
        ans=(-1+sqrt(1+a))/2.0;
        n=(long long)ans;
        printf("%lld\n", n);
    }
    return 0;
}
