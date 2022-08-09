#include <iostream>
using namespace std;
int main()
{
    int e, c, a, f, n, t;
    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;
        n=e+f;
        a=n;
        while(n>=c)
        {
            a=a+(n/c);
            n=(n/c)+(n%c);
        }
        cout<<a-e-f<<endl;
    }
}
