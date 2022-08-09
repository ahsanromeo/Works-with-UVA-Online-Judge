#include <iostream>
using namespace std;
int main()
{
    long long int a, i, sum;
    while(cin>>a)
    {
        if(a<0) break;
        sum=0;
        for(i=1;;i*=10)
        {
            sum=sum+i*(a%3);
            a/=3;
            if(a==0) break;
        }
        cout<<sum<<endl;
    }
}
