#include <iostream>
using namespace std;
long long int fev(int n)
{
    if(n==1||n==2) return 1;
    long long int a=1, b=1, c;
    int cou=0;
    for(;;)
    {
        c=a+b;
        a=b;
        b=c;
        cou++;
        if(cou==n-2) return c;
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        cout<<fev(n+1)<<endl;
    }
}
