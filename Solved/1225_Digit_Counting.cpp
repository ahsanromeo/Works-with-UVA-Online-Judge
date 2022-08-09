#include <iostream>
using namespace std;
int main(void)
{
    int b, n, t, i, s, cou[10];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<10;i++)
        {
            cou[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            b=i;
            for(;;)
            {
                s=b%10;
                cou[s]++;
                b/=10;
                if(b==0) break;
            }
        }
        for(i=0;i<10;i++)
        {
            cout<<cou[i];
            if(i<9) cout<<" ";
        }
        cout<<endl;
    }
}
