#include <iostream>
using namespace std;
int main()
{
    int n, k, p, i, i2, i3, t;
    while(cin>>t)
    {
        for(i3=1;i3<=t;i3++)
        {
            cin>>n>>k>>p;
            for(i=1,i2=k;i<=p;i++)
            {
                i2++;
                if(i2>n)
                {
                    i2=1;
                }
            }
            cout<<"Case "<<i3<<": "<<i2<<endl;
        }
    }
}
