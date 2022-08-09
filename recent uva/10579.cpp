#include <iostream>
#include <vector>
using namespace std;
string str_rev(string a);
string str_adder(string a, string b);
int main()
{
    string tem;
    vector<string>vs;
    vs.push_back("1");
    vs.push_back("1");
    int i;
    for(i=2;i<4787;i++)
    {
        tem=str_adder(vs[i-1],vs[i-2]);
        vs.push_back(tem);
    }
    while(cin>>i)
        cout<<vs[i-1]<<endl;
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
