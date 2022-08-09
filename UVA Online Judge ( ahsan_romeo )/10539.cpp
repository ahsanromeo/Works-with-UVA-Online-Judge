#include <stdio.h>
#define ld long long int
char nums[1000000];
ld apn[80070];
void sieve();
int main()
{
    sieve();
    ld a, b, i, c, t;
    scanf("%lld", &t);
    while(t--)
    {
        c=0;
        scanf("%lld %lld", &a, &b);
        for(i=0;i<80070;i++)
            if(apn[i]>=a&&apn[i]<=b)
                c++;
        printf("%lld\n", c);
    }
}
void sieve()
{
    ld i, j, k, u=0;
    for(i=0;i<1000000;i++)
        if(nums[i]!='0')
        {
            k=i+2;
            for(j=k+k;j<1000000;j+=k)
                nums[j-2]='0';
            for(j=k*k;j<=1000000000000;j*=k)
                apn[u++]=j;
        }
}
