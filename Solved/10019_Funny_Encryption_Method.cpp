#include <iostream>
#include <cmath>
using namespace std;
int bin(int n);
int hex(int n);
int main()
{
    int n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<bin(n)<<" "<<hex(n)<<endl;
    }
}
int bin(int n)
{
    int r, l=0;
    for(;;)
    {
        r=n%2;
        if(r==1) l++;
        n/=2;
        if(n==0) break;
    }
    return l;
}
int hex(int n)
{
    int s=0;
    for(int i=0;;i++)
    {
        s=s+(n%10)*pow(16,i);
        n/=10;
        if(n==0) break;
    }
    return bin(s);
}
