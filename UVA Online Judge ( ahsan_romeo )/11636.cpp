#include <iostream>
using namespace std;
int main()
{
    int n, l, i, t=0;
    while(cin>>n)
    {
        if(n<0) break;
        l=1;
        i=0;
        t++;
        while(l<n)
        {
            l*=2;
            i++;
        }
        cout<<"Case "<<t<<": "<<i<<endl;
    }
}
