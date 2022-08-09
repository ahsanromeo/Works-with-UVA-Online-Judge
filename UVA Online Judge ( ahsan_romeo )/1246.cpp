#include <stdio.h>
#define llld long long int
char terr[10000];
int priu(llld n);
void terrorist(llld n)
{
    llld i, j=0;
    for(i=0;i<n;i++)
        if(priu(i)==1)
            terr[i]='1';
}
int main()
{
    terrorist(10000);
    llld i, j, k, n, a, b;
    int t, u;
    llld ara[10000];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %lld", &a, &b);
        k=0;
        u=0;
        if(a>b)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        for(i=a;i<=b;i++)
            if(terr[i]=='1')
            {
                k++;
                ara[u++]=i;
            }
        if(k==0)
            printf("-1\n");
        else
        {
            for(i=0;i<u;i++)
            {
                printf("%lld", ara[i]);
                if(i!=u-1)
                    printf(" ");

            }
            printf("\n");
        }
    }
}
int priu(llld n)
{
    int i, k=0;
    for(i=1;i<=n;i++)
        if(n%i==0)
            k++;
    if(k==0||k==1)
        return 0;
    for(i=2;i*i<=k;i++)
        if(k%i==0)
            return 0;
    return 1;
}
