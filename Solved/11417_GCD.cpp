#include <iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
    int n, i, j, g;
    while(cin>>n)
    {
        if(n==0) break;
        g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                g+=gcd(i, j);
            }
        }
        cout<<g<<endl;
    }
}
int gcd(int a, int b)
{
     if(b==0) return a;
     else return gcd(b,a%b);
}
