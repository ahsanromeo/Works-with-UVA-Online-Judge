#include <iostream>
using namespace std;
int main()
{
    int c, t, d1;
    while(cin>>c>>t)
    {
        if(c==-1&&t==-1) break;
        if(c>t) d1=c-t;
        else d1=t-c;
        if(d1>=50) cout<<100-d1<<endl;
        else cout<<d1<<endl;
    }
}
