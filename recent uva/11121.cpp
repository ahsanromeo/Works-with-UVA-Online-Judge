#include <iostream>
using namespace std;
#include <stdio.h>
typedef long long lng;
string base__2(lng n);
string str_rev(string a);
int main()
{
    int n;
    while(cin>>n)
        cout<<base__2(n)<<endl;
}
string base__2(lng n)
{
    string b="";
    while(n!=0)
    {
        b+=((n%(-2))+48);
        n/=(-2);
    }
    return str_rev(b);
}
string str_rev(string a)
{
    string b="";
    for(int i=a.size()-1;i>=0;--i)
        b+=a[i];
    return b;
}
