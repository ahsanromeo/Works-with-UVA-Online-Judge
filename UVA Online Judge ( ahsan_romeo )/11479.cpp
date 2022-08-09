#include <iostream>
using namespace std;
int main()
{
    int t, flag;
    long long int a, b, c;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>a>>b>>c;
            if(a+b>c&&b+c>a&&c+a>b)
            {
                if(a==b&&b==c)
                {
                    flag=1;
                }
                else if(a==b||b==c||c==a)
                {
                    flag=2;
                }
                else if(a!=b&&b!=c&&c!=a)
                {
                    flag=3;
                }
            }
            else if(a+b<=c||b+c<=a||c+a<=b)
            {
                flag=4;
            }
            if(flag==1)
            {
                cout<<"Case "<<i<<": Equilateral"<<endl;
            }
            else if(flag==2)
            {
                cout<<"Case "<<i<<": Isosceles"<<endl;
            }
            else if(flag==3)
            {
                cout<<"Case "<<i<<": Scalene"<<endl;
            }
            else if(flag==4)
            {
                cout<<"Case "<<i<<": Invalid"<<endl;
            }
        }
    }
}
