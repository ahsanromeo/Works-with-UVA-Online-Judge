#include <iostream>
using namespace std;
#include <stdio.h>
struct webpage
{
    string a;
    int r;
}web[10], tem;
int main()
{
    int i, t, j, tc=1;
    cin>>t;
    getchar();
    while(t--)
    {
        for(i=0;i<10;i++)
            cin>>web[i].a>>web[i].r;
        for(i=0;i<10;i++)
            for(j=i+1;j<10;j++)
                if(web[j].r>web[i].r)
                {
                    tem=web[j];
                    web[j]=web[i];
                    web[i]=tem;
                }
        for(i=0;i<9;i++)
            if(web[i].r!=web[i+1].r)
            {
                j=i;
                break;
            }
        cout<<"Case #"<<tc++<<":\n";
        for(i=0;i<=j;i++)
            cout<<web[i].a<<endl;
    }
}
