#include <iostream>
using namespace std;
#define lld long long int
int addd(lld n)
{
    lld s=0;
    for(;;)
    {
        s+=(n%10);
        n/=10;
        if(n==0) break;
    }
    return s;
}
int main(void)
{
    lld i, j, temp, p, n, s, t, b;
    cin>>t;
    while(t--)
    {
        cin>>j;
        for(n=j+1;;n++)
        {
            s=0;
            b=0;
            temp=n;
            p=addd(temp);
            for(i=2;i*i<=temp;)
            {
                if(temp%i==0)
                {
                    temp/=i;
                    b=1;
                    s+=addd(i);
                }
                else i++;
            }
            s+=addd(temp);
            if(s==p&&b==1)
            {
                cout<<n<<endl;
                break;
            }
        }
    }
}
