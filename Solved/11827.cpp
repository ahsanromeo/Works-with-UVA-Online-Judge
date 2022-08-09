#include <iostream>
using namespace std;
#include <string.h>
#include <stdio.h>
#define ld long long int
ld gcd(ld a, ld b);
int nm(char c);
int main()
{
    ld a, i, j, k, p, sp, l, u;
    int t;
    char s[100000];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(s);
        l=strlen(s);
        if(nm(s[0])==1)
            sp=1;
        else
            sp=0;
        for(i=0;i<l-1;i++)
            if(nm(s[i])==0&&nm(s[i+1])==1)
                sp++;
        ld nums[sp];
        u=0;
        for(i=0;i<=l;i++)
        {
            if(nm(s[i])==1&&nm(s[i+1])==0)
            {
                k=0;
                for(j=i,p=1;;j--,p*=10)
                {
                    if(nm(s[j])==0||j<0)
                        break;
                    a=s[j]-48;
                    k+=(a*p);
                }
                nums[u++]=k;
            }
        }
        k=0;
        for(i=0;i<u;i++)
        {
            for(j=0;j<u;j++)
            {
                if(i==j)
                    continue;
                p=gcd(nums[i],nums[j]);
                if(p>k)
                    k=p;
            }
        }
        printf("%lld\n", k);
    }
}
int nm(char c)
{
    if(c>=48&&c<=57)
        return 1;
    return 0;
}
ld gcd(ld a, ld b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
