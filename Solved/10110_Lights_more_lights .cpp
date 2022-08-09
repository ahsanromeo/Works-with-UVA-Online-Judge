#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned long long int n, i, s;
    while(cin>>n)
    {
        if(n==0) break;
        s=sqrt(n);
        if(s*s==n) cout<<"yes"<<endl; else cout<<"no"<<endl;
    }
}
