#include <iostream>
using namespace std;
unsigned long long int rev(unsigned long long int a)
{
    unsigned long long int sum=0, rem;
    for(;;)
    {
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
        if(a==0) break;
    }
    return sum;
}
int main()
{
    unsigned long long int a;
    int t, p;
    cin>>t;
    while(t--)
    {
        cin>>a;
        p=0;
        while(1)
        {
            a=a+rev(a);
            p++;
            if(a==rev(a)) break;
        }
        cout<<p<<" "<<a<<endl;
    }
}
