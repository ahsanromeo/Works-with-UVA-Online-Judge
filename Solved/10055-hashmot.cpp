#include<iostream>
using namespace std;
int main()
{
    long long int m, n, d;
    while(cin>>m>>n)
    {
        if(n>=m)
        {
            d=n-m;
            cout<<d<<"\n";
        }
        else
        {
            d=m-n;
            cout<<d<<"\n";
        }
    }
}
