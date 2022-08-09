#include <iostream>
using namespace std;
int main()
{
    int s, a, m, n;
    while(cin>>s)
    {
        m=0;
        if(s==0)
        {
            break;
        }
        for(n=1;n<=s;n++)
        {
            cin>>a;
            if(a>m)
            {
                m=a;
            }
        }
        cout<<m+1<<endl;
    }
}
