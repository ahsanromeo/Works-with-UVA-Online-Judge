#include <iostream>
#include <vector>
using namespace std;
string str_rev(string a);
string str_adder(string a, string b);
long long s2i(string a);
int chk(string n);
int main()
{
    string tem;
    vector<string>vs;
    vector<string>vn;
    vs.push_back("0"); vs.push_back("1"); vs.push_back("1"); vn.push_back("0"); vn.push_back("1"); vn.push_back("2");
    int i, l;
    for(i=3;i<1501;i++)
    {
        tem=str_adder(vs[i-1],vs[i-2]);
        vs.push_back(tem);
        tem=str_adder(vn[i-1],vs[i]);
        vn.push_back(tem);
    }
    while(cin>>i)
        cout<<vn[i-1]<<endl;
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
long long s2i(string a)
{
    int l=a.size(), i;
    long long sum=0;
    for(i=0;i<l;++i)
        sum=sum*10+(a[i]-48);
    return sum;
}
int chk(string n)
{
    int c=(n.size()-1)-48;
    return c%2
}
