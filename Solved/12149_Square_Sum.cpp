#include <iostream>
using namespace std;
int main()
{
    int i, sum, n;
    while(cin>>n)
    {
        if(n==0) break;
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+i*i;
        }
        cout<<sum<<endl;
    }
}
