#include <stdio.h>
int main()
{
    long long int i, a, b, k;
    int tc=1;
    while(scanf("%lld %lld", &a, &b)==2)
    {
        if(a<0&&b<0)
            break;
        k=a;
        for(i=1;;i++)
        {
            if(k==1)
                break;
            if(k%2==0)
                k/=2;
            else
                k=3*k+1;
            if(k>b)
                break;
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", tc++, a, b, i);
    }
}
