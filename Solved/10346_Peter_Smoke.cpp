#include <iostream>
using namespace std;
int main()
{
    int n, k, a;
    while(cin>>n>>k)
    {
        a=n;
        while(n>=k)
        {
            a=a+(n/k);
            n=(n/k)+(n%k);
        }
        cout<<a<<endl;
    }
}
