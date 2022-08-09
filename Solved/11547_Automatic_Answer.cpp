#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n*=315;
        n+=36962;
        n/=10;
        n=n%10;
        if(n<0) n=(-n);
        cout<<n<<endl;
    }
}
