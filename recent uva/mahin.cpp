#include<iostream>
#include<math.h>
using namespace std;
int a[1000000]={0};
int main()
{
    a[0]=2;
    a[1]=2;
    for(long long int i=2; i<=sqrt(100) ; i++)
    {
        if(a[i]!=2)
        {
            for(long long k=i+i ; k<=100 ; k=k+i)
            {
                a[k]=2;
            }
            a[i]=0;
        }
    }
    for(long long int h=0 ; h<=100 ; h++)
    {
        if(a[h]==0) cout<<h<<endl;
    }

}
