#include <iostream>
using namespace std;
int main()
{
    int t, n, n1, i, i2=0, m;
    cin>>t;
    while(t>0)
    {
        t--;
        i2++;
        cin>>n1;
        m=0;
        for(i=1;i<=n1;i++)
        {
            cin>>n;
            if(n>m) m=n;
        }
        cout<<"Case "<<i2<<": "<<m<<endl;
    }
}
