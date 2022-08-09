#include <iostream>
using namespace std;
string str_rev(string a);
string str_adder(string a, string b);
string zero_adder(string a, int n);
string str_multi(string a, string b);
string dec_mul(string a, string b);
int main()
{
    string a;
    int n;
    while(cin>>a>>n)
    {
        string s="1";
        int i, t1, t2;
        for(i=1;i<=n;++i)
            s=dec_mul(a,s);
        for(i=0;s[i]!='.';++i)
            if(s[i]>='1'&&s[i]<='9')
                break;
        t1=i;
        for(i=s.size()-1;s[i]!='.';--i)
            if(s[i]>='1'&&s[i]<='9')
                break;
        t2=i;
        for(i=t1;i<=t2;++i)
            cout<<s[i];
        cout<<endl;
    }
}
string str_rev(string a)
{
    string b="";
    for(int i=a.size()-1; i>=0; i--)
        b+=a[i];
    return b;
}
string str_adder(string a, string b)
{
    int l1=a.size(), l2=b.size();
    if(l2>l1)
    {
        string tem=a;
        a=b;
        b=tem;
        int l=l1;
        l1=l2;
        l2=l;
    }
    int c=0, t, i;
    string res="";
    for(i=0; i<l1; i++)
    {
        if(i<l2)
            t=(a[i]-48)+(b[i]-48)+c;
        else
            t=(a[i]-48)+c;
        res+=((t%10)+48);
        c=(t/10);
    }
    if(c)
        res+=(c+48);
    return res;
}
string zero_adder(string a, int n)
{
    string b="";
    for(int i=0; i<n; i++)
        b+="0";
    b+=a;
    return b;
}
string str_multi(string a, string b)
{
    a=str_rev(a);
    b=str_rev(b);
    int l1=a.size(), l2=b.size(), i, j, t, c;
    string tem, res="0";
    for(j=0; j<l2; j++)
    {
        c=0;
        tem="";
        for(i=0; i<l1; i++)
        {
            t=((a[i]-48)*(b[j]-48)+c);
            tem+=((t%10)+48);
            c=(t/10);
        }
        if(c)
            tem+=(c+48);
        tem=zero_adder(tem,j);
        res=str_adder(tem,res);
    }
    res=str_rev(res);
    return res;
}
string dec_mul(string a, string b)
{
    string c="", d="";
    int i, p1=0, p2=0, l1=a.size(), l2=b.size(), l, p;
    for(i=0; i<l1; i++)
    {
        if(a[i]=='.')
        {
            p1=l1-i-1;
            continue;
        }
        c+=a[i];
    }
    for(i=0; i<l2; i++)
    {
        if(b[i]=='.')
        {
            p2=l2-i-1;
            continue;
        }
        d+=b[i];
    }
    c=str_multi(c,d);
    d="";
    p=c.size()-(p1+p2);
    for(i=0; i<p; i++)
        d+=c[i];
    if(p1+p2)
        d+=".";
    for(i=p; i<c.size(); i++)
        d+=c[i];
    return d;
}
