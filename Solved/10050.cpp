#include <iostream>
using namespace std;
int main()
{
    bool h[3651];
    int t, n, p, i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;++i)
            h[i]=false;
        cin>>p;
        for(i=0;i<p;++i)
        {
            int tem;
            cin>>tem;
            for(int j=tem-1;j<n;j+=tem)
                if(j%7!=5&&j%7!=6)
                    h[j]=true;
        }
        int c=0;
        for(i=0;i<n;++i)
            c+=h[i];
        cout<<c<<endl;
    }
}
