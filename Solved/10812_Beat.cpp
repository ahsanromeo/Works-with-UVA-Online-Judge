#include <iostream>
using namespace std;
int main()
{
    long long int s, d, a, b, t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>s>>d;
            if(d>s||(s-d)%2!=0) cout<<"impossible"<<endl;
            else
            {
                b=(s-d)/2;
                cout<<b+d<<" "<<b<<endl;
            }
        }
    }
}
