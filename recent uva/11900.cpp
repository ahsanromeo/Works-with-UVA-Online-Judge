#include <iostream>
using namespace std;
int main()
{
    int t, n, p, q, tc, i, m, w, nu;
    cin>>t;
    for(tc=1;tc<=t;tc++)
    {
        m=0;
        nu=0;
        w=0;
        cin>>n>>p>>q;
        int ara[n];
        for(i=0;i<n;i++)
            cin>>ara[n];
        for(i=0;i<n;i++)
        {
            nu++;
            w=w+(ara[i]);
            if(nu>p||w>q)
            {
                break;
            }

        }
        cout<<nu<<endl;
    }
}
