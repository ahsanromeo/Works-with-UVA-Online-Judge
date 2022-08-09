#include <iostream>
using namespace std;
#include <stdio.h>
long long int gcd(long long int a, long long int b);
void prispace(long long int n);
void prihif(long long int n);
int diglen(long long int n);
int main()
{
    long long int n, ins, l, a, b, c, i;
    int neg, tc=1, s, h;
    while(scanf("%lld",&n)&&n)
    {
        l=0;
        neg=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ins);
            l+=ins;
        }
        if(l<0)
        {
            neg=1;
            l=(-l);
        }
        printf("Case %d:\n",tc++);
        if(l==0)
        {
            printf("0\n");
            continue;
        }
        if(l>=n)
        {
            if(l%n==0)
            {
                a=l/n;
                if(neg)
                    printf("- ");
                printf("%lld\n",a);
            }
            else
            {
                a=l/n;
                b=(l%n);
                c=gcd(b,n);
                b/=c;
                c=n/c;
                if(neg)
                    printf("  ");
                prispace(a);
                s=diglen(c)-diglen(b);
                while(s--)
                    printf(" ");
                printf("%lld\n",b);
                if(neg)
                    printf("- ");
                printf("%lld",a);
                prihif(c);
                printf("\n");
                if(neg)
                    printf("  ");
                prispace(a);
                printf("%lld\n",c);
            }
        }
        else
        {
            c=gcd(l,n);
            b=(l%n);
            b=l/c;
            c=n/c;
            if(neg)
                printf("  ");
            s=diglen(c)-diglen(b);
            while(s--)
                printf(" ");
            printf("%lld\n",b);
            if(neg)
                printf("- ");
            prihif(c);
            printf("\n");
            if(neg)
                printf("  ");
            printf("%lld\n",c);
        }
    }
}
long long int gcd(long long int a, long long int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void prispace(long long int n)
{
    for(;n!=0;n/=10)
        printf(" ");
}
void prihif(long long int n)
{
    for(;n!=0;n/=10)
        printf("-");
}
int diglen(long long int n)
{
    int l=0;
    for(;n!=0;n/=10)
        l++;
    return l;
}
