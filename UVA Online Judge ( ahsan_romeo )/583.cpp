#include <iostream>
#include <cmath>
using namespace std;
int isp(long long int a);
int main(void)
{
    long long int a, i;
    while(cin>>a)
    {
        if(a==0) break;
        if(a<0)
        {
            a=(-1)*a;
            cout<<-a<<" = -1 x ";
        }
        else cout<<a<<" = ";
        for(i=2;i<=sqrt(a);)
        {
            if(a%i==0)
            {
                a=a/i;
                cout<<i<<" x ";
                if(isp(a)==0) break;
            }
            else i++;
        }
        cout<<a<<endl;
    }
}
int isp(long long int a)
{
    long long int i;
    int flag=0;
    for(i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0) return 0;
    else return 1;
}
