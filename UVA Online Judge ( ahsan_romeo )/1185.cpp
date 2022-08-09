#include <iostream>
using namespace std;
#include <cmath>
#include <stdio.h>
#define ld long long int
int main()
{
    ld i, n, t;
    double d=0.0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else
        {
            d=0.0;
            for(i=1;i<=n;i++)
                d+=log10(i);
            printf("%0.0lf\n", ceil(d));
        }
    }
}
