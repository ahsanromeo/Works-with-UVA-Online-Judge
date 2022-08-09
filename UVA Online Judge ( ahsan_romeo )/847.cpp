#include <iostream>
using namespace std;
#define lll unsigned long long int
int main()
{
    lll n, i, p, m;
    while(cin>>n)
    {
        for(i=1,m=9,p=1;;i++)
        {
            if(p>=n)
                break;
            p*=m;
            if(m==9)
                m=2;
            else
                m=9;
        }
        if(i%2)
            cout<<"Ollie wins."<<endl;
        else
            cout<<"Stan wins."<<endl;
    }
}
