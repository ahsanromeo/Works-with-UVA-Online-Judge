#include <iostream>
using namespace std;
string s_rev(string p);
string adder(string a, string b);
int main()
{
    string a, sum="0";
    while(cin>>a)
    {
        if(a=="0")
            break;
        a=s_rev(a);
        sum=adder(a,sum);
    }
    cout<<s_rev(sum)<<endl;
}
string s_rev(string p)
{
    string q="";
    for(int j=p.length()-1;j>=0;j--)
        q+=p[j];
    return q;
}
string adder(string x, string y)
{
    string z;
    string r="";
    if(y.length()>x.length())
    {
        z=x;
        x=y;
        y=z;
    }
    int a, b, c=0, i, d;
    for(i=0;i<x.length();i++)
    {
        if(i<y.length())
        {
            a=x[i]-48;
            b=y[i]-48;
            d=a+b+c;
            if(d>9)
            {
                r+=((d%10)+48);
                c=d/10;
            }
            else
            {
                r+=(d+48);
                c=0;
            }
            if(i==x.length()-1&&c>0)
                r+=(c+48);
        }
        else
        {
            a=x[i]-48;
            d=a+c;
            if(d>9)
            {
                r+=((d%10)+48);
                c=d/10;
            }
            else
            {
                r+=(d+48);
                c=0;
            }
            if(i==x.length()-1&&c>0)
                r+=(c+48);
        }
    }
    return r;
}
