#include <iostream>
using namespace std;
#include <cmath>
#define lld long long int
int isp(lld n);
lld rev(lld n);
int main()
{
    lld n, i, temp;
    while(cin>>n)
    {
        if(isp(n)==0)
            cout<<n<<" is not prime."<<endl;
        else
        {
            temp=rev(n);
            if(temp==n)
                cout<<n<<" is prime."<<endl;
            else
            {
                if(isp(temp)==1)
                    cout<<n<<" is emirp."<<endl;
                else
                    cout<<n<<" is prime."<<endl;
            }
        }
    }
}
lld rev(lld n)
{
    lld s=0;
    for(;;)
    {
        s=s*10+n%10;
        n/=10;
        if(n==0)
            break;
    }
    return s;
}
int isp(lld n)
{
    if(n==1||n==0)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    lld j=sqrt(n);
    for(int i=3;i<=j;i++)
        if(n%i==0)
            return 0;
    return 1;
}
