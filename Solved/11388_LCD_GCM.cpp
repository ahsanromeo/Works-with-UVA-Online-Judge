#include <iostream>
using namespace std;
int main()
{
    long long int a, b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b%a==0)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
