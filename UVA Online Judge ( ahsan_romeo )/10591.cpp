#include <iostream>
using namespace std;
long long int sqr(long long int a)
{
    long long int sum=0, rem;
    if(a<10) return a*a;
    for(;;)
    {
        rem=a%10;
        a=a/10;
        sum=sum+rem*rem;
        if(a==0) break;
    }
    return sum;
}
int main()
{
    long long int a, temp;
    int t, tc=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        temp=a;
        while(1)
        {
            a=sqr(a);
            if(a<10)
                break;
        }
        if(a==1) cout<<"Case #"<<++tc<<": "<<temp<<" is a Happy number."<<endl;
        else cout<<"Case #"<<++tc<<": "<<temp<<" is an Unhappy number."<<endl;
    }
}
