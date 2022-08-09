#include <iostream>
using namespace std;
int digadd(int a)
{
    int rem, sum=0;
    for(;;)
    {
        rem=a%10;
        a=a/10;
        sum+=rem;
        if(a==0) break;
    }
    return sum;
}
int main()
{
    long long int a;
    while(cin>>a)
    {
        if(a==0) break;
        while(a>=10)
        {
            a=digadd(a);
        }
        cout<<a<<endl;
    }
}
