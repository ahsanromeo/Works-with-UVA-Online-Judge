#include <iostream>
using namespace std;
int main()
{
    int a, b, t, temp, sum=0;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>a>>b;
            if(a>b)
            {
                temp=b;
                b=a;
                a=temp;
            }
            for(int c=a;c<=b;c++)
            {
                if(c%2!=0)
                {
                    sum=sum+c;
                }
            }
            cout<<"Case "<<i<<": "<<sum<<endl;
            sum=0;
        }
    }
}
