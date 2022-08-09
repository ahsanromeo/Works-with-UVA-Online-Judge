#include <iostream>
using namespace std;
int main()
{
    int h1, m1, h2, m2, t;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0&&m1==0&&h2==0&&m2==0) break;
        t=(60*h2+m2)-(60*h1+m1);
        if(t<0) t=1440+t;
        cout<<t<<endl;
    }
}
