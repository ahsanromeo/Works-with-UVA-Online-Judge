#include <iostream>
using namespace std;
long long int fiv(long long int i)
{
    long long int a, b, c, cou=0;
    a=1;
    b=1;
    c=1;
    if(i==1||i==2) return 1;
    else
    {
        for(;;)
        {
            c=a+b;
            a=b;
            b=c;
            cou++;
            if(cou==i-2) break;
        }
        return c;
    }
}
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==-1) break;
        cout<<fiv(n+2)-1<<" "<<fiv(n+3)-1<<endl;
    }
}
