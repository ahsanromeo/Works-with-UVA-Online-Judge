#include <iostream>
using namespace std;
int main()
{
    int n, n1, h, l, p, c;
    while(cin>>c)
    {
        for(int i2=1;i2<=c;i2++)
        {
            h=-1, l=0, p=0;
            cin>>n1;
            for(int i=1;i<=n1;i++)
            {
                cin>>n;
                if(n>p){ p=n; h++; }
                else if(n<p){ p=n; l++; }
            }
            cout<<"Case "<<i2<<": "<<h<<" "<<l<<endl;
        }
    }
}
