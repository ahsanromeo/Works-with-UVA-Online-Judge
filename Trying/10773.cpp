#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    int u, v, d, tc, c;
    double s, t, t1, t2;
    while(cin>>c)
    {
        tc=0;
        for(int i=1;i<=c;i++)
        {
            cin>>d>>v>>u;
            if(v>=u) printf("Case %d: can't determine\n", ++tc);
            else
            {
                s=sqrt(u*u-v*v);
                t1=d/u;
                t2=d/s;
                if(t2>t1) t=t2-t1;
                else t=t1-t2;
                if(t==0) printf("Case %d: can't determine\n", ++tc);
                else printf("Case %d: %0.3lf\n", ++tc, t);
            }
        }
    }
}
