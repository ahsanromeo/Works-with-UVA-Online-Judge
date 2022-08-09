#include <iostream>
using namespace std;
int main()
{
    int n, m, a, i, i2;
    while(cin>>n)
    {
        int book[n];
        for(i=1;i<=n;i++)
        {
            cin>>a;
            book[i-1]=a;
        }
        cin>>m;
        for(i=0;i<=n-1;i++)
        {
            for(i2=0;i2<=n-1;i2++)
            {
                if(i==i2) continue;
                if(book[i]+book[i2]==m)
                {
                    cout<<book[i]<<" "<<book[i2]<<endl;
                }
            }
        }
    }
}
//cout<<"Peter should buy books whose prices are "<<book[i]<<" and "<<book[i2]<<endl;
