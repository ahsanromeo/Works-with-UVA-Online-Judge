#include <iostream>
#include <vector>
using namespace std;
string str_rev(string a);
string str_adder(string a, string b);
string zero_adder(string a, int n);
string str_multi(string a, string b);
string zero_rem(string a);
int main()
{
    ios_base::sync_with_stdio(false);
    string a, b, p;
    while(cin>>a)
    {

        //cout<<p<<endl;
        if(a=="0"||a=="1")
        {
            cout<<"Automorphic number of "<<1<<"-digit."<<endl;
            continue;
        }
        a=zero_rem(a);
        p=str_multi(a,a);
        int l1=a.size(), l2=p.size(), i, j;
        b="";
        for(i=l2-1,j=1;j<=l1;i--,j++)
            b+=p[i];
        b=str_rev(b);
        if(a==b)
            cout<<"Automorphic number of "<<a.size()<<"-digit."<<endl;
        else
            cout<<"Not an Automorphic number."<<endl;
        //cout<<a<<" "<<b<<endl;
    }
}
string str_rev(string a)
{
    string b="";
    for(int i=a.size()-1;i>=0;i--)
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
    for(i=0;i<l1;i++)
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
    for(int i=0;i<n;i++)
        b+="0";
    b+=a;
    return b;
}
string str_multi(string a, string b)
{
    a=str_rev(a); b=str_rev(b);
    int l1=a.size(), l2=b.size(), i, j, t, c;
    string tem, res="0";
    for(j=0;j<l2;j++)
    {
        c=0;
        tem="";
        for(i=0;i<l1;i++)
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
string zero_rem(string a)
{
    string b="";
    int i, j, l=a.size();
    for(i=0,j=0;a[i]=='0'&&i<l;i++)
        j++;
    for(i=j;i<l;i++)
        b+=a[i];
    return b;
}
