#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, s, i, j, n, f;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
        f=0;
        for(n=a; n<=b; n++)
        {
            s=sqrt(n);
            j=s*s;
            if(j==n)
            {
                f++;
            }
        }
        cout<<f<<endl;
    }
}
