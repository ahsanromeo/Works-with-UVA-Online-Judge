#include <iostream>
using namespace std;
int main()
{
    int a, b, rem1, rem2, temp, f, f2;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        f=0;
        f2=0;
        if(b>a)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(;;)
        {
            rem1=a%10;
            rem2=b%10;
            if(rem1+rem2+f2>9)
            {
                f++;
                f2=1;
            }
            else f2=0;
            a=a/10;
            b=b/10;
            if(a==0) break;
        }
        if(f==0) cout<<"No carry operation."<<endl;
        else if(f==1) cout<<1<<" carry operation."<<endl;
        else cout<<f<<" carry operations."<<endl;
    }
}
