#include <iostream>
using namespace std;
int mc(int n)
{
    if(n>100)
    {
        n=n-10;
    }
    else
    {
        n=mc(mc(n+11));
    }
    return n;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<"f91("<<n<<") = "<<mc(n)<<endl;
    }
}
