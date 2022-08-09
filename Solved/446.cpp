#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>
#define ll long long
ll dec2bin(ll n);
ll hex2dec(char s[]);
int main()
{
    ll t, l, i, j, k, a, b, r;
    char line[20], s2[20], s1[20], ch;
    cin>>t;
    getchar();
    while(t--)
    {
        for(i=0;i<20;i++)
        {
            line[i]=0;
            s1[i]=0;
            s2[i]=0;
        }
        gets(line);
        l=strlen(line);
        for(i=0,j=1;line[i]!=' ';i++,j++)
            s1[i]=line[i];
        a=hex2dec(s1);
        ch=line[j];
        for(i=j+2,k=0;i<l;i++)
            s2[k++]=line[i];
        b=hex2dec(s2);
        if(ch=='+')
            r=a+b;
        else
            r=a-b;
        a=dec2bin(a);
        b=dec2bin(b);
        printf("%013lld", a);
        printf(" %c ", ch);
        printf("%013lld", b);
        printf(" = %lld\n", r);
    }
}
ll dec2bin(ll n)
{
    ll i, sum=0;
    for(i=1;n!=0;n/=2,i*=10)
        sum+=(i*(n%2));
    return sum;
}
ll hex2dec(char s[])
{
    int l=strlen(s), sum=0, i, j, a;
    for(i=l-1,j=1;i>=0;i--,j*=16)
    {
        if(s[i]>='0'&&s[i]<='9')
            a=s[i]-48;
        else
            a=s[i]-55;
        sum=sum+(a*j);
    }
    return sum;
}
