#include <iostream>
using namespace std;
#define lng long long
int main()
{
    lng n, a, b, i, j, v;
    int f;
    while(cin>>n)
    {
        v=0;
        f=0;
        for(i=1;i<=n;i++)
        {
            if(f==1)
                break;
            for(j=i;j<=n;j++)
            {
                if(v>n)
                    break;
                else if(v==n)
                {
                    a=i;
                    b=j;
                    f=1;
                    break;
                }
                else
                    v+=j;
            }
        }
        cout<<n<<" = "<<a<<" + ... + "<<b<<endl;
    }
}
