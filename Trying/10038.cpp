#include <iostream>
using namespace std;
int dif(int a, int b)
{
    if(a>b) return a-b;
    else return b-a;
}
int main()
{
    int n, a, i, f;
    while(cin>>n)
    {
        int num[n];
        f=0;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            num[i-1]=a;
        }
        for(i=0;i<n-1;i++)
        {
            if(dif(num[i],num[i+1])<1||dif(num[i],num[i+1])>n-1)
            {
                f=1;
                break;
            }
        }
        if(f>0) cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;
    }
}
