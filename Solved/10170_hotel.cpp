#include <iostream>
using namespace std;
int main()
{
    long int i, s, d, sum;
    while(cin>>s>>d)
    {
        sum=0;
        for(i=s;;i++)
        {
            sum+=i;
            if(sum>=d)
                break;
        }
        cout<<i<<endl;
    }
}
