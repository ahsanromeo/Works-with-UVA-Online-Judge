#include <iostream>>
using namespace std;
int main()
{
    long long int a, b;
    int t, i;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>a>>b;
            if(a>b)
            {
                cout<<">"<<endl;
            }
            else if(a==b)
            {
                cout<<"="<<endl;
            }
            else if(a<b)
            {
                cout<<"<"<<endl;
            }
        }
    }
}
