#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        if(n==561||n==1105||n==1729||n==2465||n==2821||n==6601||n==8911||n==10585||n==15841||n==29341||n==41041||n==46657||n==52633||n==62745||n==63973)
            cout<<"The number "<<n<<" is a Carmichael number."<<endl;
        else cout<<n<<" is normal."<<endl;
    }
}
