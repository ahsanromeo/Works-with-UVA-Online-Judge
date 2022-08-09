#include <iostream>
using namespace std;
int main()
{
    long int k, x, y, x1, y1;
    while(cin>>k)
    {
        if(k==0) break;
        cin>>x>>y;
        for(int i=1;i<=k;i++)
        {
            cin>>x1>>y1;
            if(x1==x||y1==y) cout<<"divisa"<<endl;
            else if(x1>x&&y1>y) cout<<"NE"<<endl;
            else if(x1>x&&y1<y) cout<<"SE"<<endl;
            else if(x1<x&&y1>y) cout<<"NO"<<endl;
            else if(x1<x&&y1<y) cout<<"SO"<<endl;
        }
    }
}
