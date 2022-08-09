#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    while(cin>>n&&n)
    {
        int f=0;
        for(y=0;y<=n;y++)
        {
            double x=n+y*y*y;
            double s=pow(x,1/3.0);
            int i=ceil(s);
            if(y>i)
                break;
            if(i*i*i==x)
            {
                cout<<i<<" "<<y<<endl;
                f=1;
                break;
            }
        }
        if(!f)
            cout<<"No solution"<<endl;
    }
}
