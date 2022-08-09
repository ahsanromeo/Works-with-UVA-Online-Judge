#include <stdio.h>
typedef long long lng;
int main()
{
    lng n, i, j, d;
    int k;
    while(scanf("%lld %lld %lld", &n, &i, &j)==3)
    {
        if(i>j)
        {
            d=i;
            i=j;
            j=d;
        }
        for(k=1;;++k)
        {
            if(i%2==1)
                ++i;
            if(j%2==1)
                ++j;
            i/=2;
            j/=2;
            if(i==j)
                break;
        }
        printf("%d\n", k);
    }
    return 0;
}
