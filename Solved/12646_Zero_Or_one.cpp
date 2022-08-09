#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    while(cin>>a>>b>>c)
    {

        if(a!=b&&a!=c&&b==c) cout<<"A"<<endl;
        else if(b!=a&&b!=c&&a==c) cout<<"B"<<endl;
        else if(c!=a&&c!=b&&a==b) cout<<"C"<<endl;
        else cout<<"*"<<endl;
    }
}
