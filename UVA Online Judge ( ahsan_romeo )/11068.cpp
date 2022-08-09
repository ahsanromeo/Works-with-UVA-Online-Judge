#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double d, x, y;
    int a1, a2, b1, b2, c1, c2;
    while(cin>>a1>>b1>>c1>>a2>>b2>>c2)
    {
        if(a1==0&&b1==0&&c1==0&&a2==0&&b2==0&&c2==0) break;
        d=(a1*b2)-(a2*b1);
        if(d==0) cout<<"No fixed point exists."<<endl;
        else
        {
            x=((b1*c2)-(b2*c1))/d;
            y=((c1*a2)-(c2*a1))/d;
            printf("The fixed point is at %.2lf %.2lf.\n", -x, -y);
        }
    }
}
