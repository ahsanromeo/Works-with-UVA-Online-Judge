#include <iostream>
#include <stdio.h>
#include <map>
#define lng long long
using namespace std;
int main()
{
    lng t, i, n, j, k, l, h;
    //cin>>t;
    while(cin>>n)
    {
        map<lng,lng>fn;
        h=n/2;
        for(i=2;i<=h;)
        {
            if(n%i==0)
            {
                fn[i]++;
                n/=i;
            }
            else
                i++;
        }
        for(i=0;i<fn.size();i++)
        {
            if(fn[i]!=0)
                cout<<i<<" "<<fn[i]<<endl;
        }
    }
}
