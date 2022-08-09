#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>
#define lng long long
int main()
{
    lng n, l, i, u, j, mx, t, cou, v, s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&l, &u);
        mx=-5;
        for(i=l;i<=u;i++)
        {
            s=sqrt(i);
            if(s*s==i)
                cou=1;
            else
                cou=2;
            for(j=2;j<=s;j++)
            {
                if(i%j==0)
                    cou+=2;
            }
            if(cou>mx)
            {
                mx=cou;
                v=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", l, u, v, mx);
    }
}
