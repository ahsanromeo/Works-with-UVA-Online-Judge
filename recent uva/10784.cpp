#include <stdio.h>
#include <math.h>
int main()
{
    long long n, N, t=1;
    while(scanf("%lld", &N)&&N!=0)
    {
        n=ceil((3 + sqrt(9 + 8*N)) / 2);
        printf("Case %lld: %lld\n", t++, n);
    }
}
