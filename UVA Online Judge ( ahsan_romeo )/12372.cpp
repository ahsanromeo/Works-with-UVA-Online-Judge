#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c, tc=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a>20||b>20||c>20) cout<<"Case "<<++tc<<": bad"<<endl;
        else cout<<"Case "<<++tc<<": good"<<endl;
    }
}
