#include <iostream>
#include <vector>
using namespace std;
string str_rev(string a);
string str_adder(string a, string b);
string zero_adder(string a, int n);
string str_multi(string a, string b);
string num2str(int n);
int main()
{
    int i, n;
    string b;
    vector<string>vf;
    vf.push_back("1");
    for(i=1;i<=1000;i++)
    {
        b=num2str(i);
        b=str_multi(vf[i-1],b);
        vf.push_back(b);
    }
    while(cin>>n)
        cout<<n<<"!\n"<<vf[n]<<endl;
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
string num2str(int n)
{
    string a="", b="";
    for(;n!=0;n/=10)
        a+=((n%10)+48);
    for(int i=a.size()-1;i>=0;i--)
        b+=a[i];
    return b;
}
