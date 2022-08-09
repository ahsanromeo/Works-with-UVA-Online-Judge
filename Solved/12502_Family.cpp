#include <iostream>
using namespace std;
int main()
{
    int x, y, z, a, c;
    cin>>c;
    while(c--)
    {
        cin>>x>>y>>z;
        a=(z*(x+(x-y))/(x+y));
        if(a<=0) cout<<0<<endl;
        else cout<<a<<endl;
    }
}
