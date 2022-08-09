#include <iostream>
using namespace std;
int main()
{
    int t, a, tc=1, n, l, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            if(i==1+n/2) l=a;
        }
        cout<<"Case "<<tc++<<": "<<l<<endl;
    }
}
