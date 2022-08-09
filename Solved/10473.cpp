#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
string dec2hex(long long n);
long long hex2dec(string n);
long long pow(long long b, long long p);
string str_rev(string a);
int main()
{
    string ins;
    while(cin>>ins)
    {
        if(ins[0]=='-')
            break;
        if(ins[1]=='x')
        {
            long long n=hex2dec(ins);
            printf("%lld\n",n);
        }
        else
        {
            long long n=atoll(ins.c_str());
            cout<<"0x"<<dec2hex(n)<<endl;
        }
    }
}
string dec2hex(long long n)
{
    string b="";
    long long r;
    for(;n!=0;n/=16)
    {
        r=n%16;
        if(r>9)
            b+=(r+55);
        else
            b+=(r+48);
    }
    return str_rev(b);
}
string str_rev(string a)
{
    string b="";
    for(long long i=a.size()-1;i>=0;--i)
        b+=a[i];
    return b;
}
long long hex2dec(string n)
{
    long long ans=0, t, i, j;
    for(i=n.size()-1,j=0;i>=2;--i,++j)
    {
        if(n[i]>='0'&&n[i]<='9')
            t=n[i]-48;
        else
            t=n[i]-55;
        ans+=(t*pow(16,j));
    }
    return ans;
}
long long pow(long long b, long long p)
{
    long long r=1;
    for(long long i=1;i<=p;++i)
        r*=b;
    return r;
}
