#include <iostream>
using namespace std;
int s2i(string s);
void decode(string s);
int main()
{
    int t, tc;
    string s;
    cin>>t;
    for(tc=1;tc<=t;tc++)
    {
        cin>>s;
        cout<<"Case "<<tc<<": ";
        decode(s);
    }
}
void decode(string s)
{
    string out="", tem;
    int l=s.size(), i, j, n;
    for(i=l-1;i>=0;i--)
    {
        tem="";
        if(s[i]>=65&&s[i]<=90)
        {
            for(j=i+1;;j++)
            {
                if((s[j]>=65&&s[j]<=90)||j==l)
                    break;
                tem+=s[j];
            }
            n=s2i(tem);
            for(j=1;j<=n;j++)
                out+=s[i];
        }
    }
    l=out.size();
    for(i=l-1;i>=0;i--)
        cout<<out[i];
    cout<<endl;
}
int s2i(string s)
{
    int l=s.size(), i, a=0, j;
    for(i=l-1,j=1;i>=0;i--,j*=10)
        a+=((s[i]-48)*j);
    return a;
}
