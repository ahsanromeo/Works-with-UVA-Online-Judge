#include <iostream>
#include <vector>
using namespace std;
string str_rev(string a);
string str_adder(string a, string b);
int cmp(string a, string b);
int main()
{
    string tem;
    vector<string>vs;
    vs.push_back("1");
    vs.push_back("2");
    int i;
    for(i=2;i<484;i++)
    {
        tem=str_adder(vs[i-1],vs[i-2]);
        vs.push_back(tem);
    }
    int l=vs.size();
    while(1)
    {
        string ll, ul;
        cin>>ll>>ul;
        if(ll=="0"&&ul=="0")
            break;
        int c=0;
        for(int i=0;i<l;++i)
            if((cmp(ll,vs[i])==1)&&(cmp(vs[i],ul)==1))
                ++c;
        cout<<c<<endl;
    }
}
string str_adder(string a, string b)
{
    a=str_rev(a); b=str_rev(b);
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
    res=str_rev(res);
    return res;
}
string str_rev(string a)
{
    string b="";
    for(int i=a.size()-1;i>=0;i--)
        b+=a[i];
    return b;
}
int cmp(string a, string b)
{
    if(a==b)
        return 1;
    int l1=a.size(), l2=b.size();
    if(l2>l1)
        return 1;
    if(l2<l1)
        return 0;
    for(int i=0;i<l1;++i)
    {
        if(b[i]<a[i])
            return 0;
        if(b[i]>a[i])
            return 1;
    }
}
