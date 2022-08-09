#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int k, n, i, j, tep, x, a[1000], m, ins[10];
    while(cin>>k&&k)
    {
        tep=0;
        a[0]=1;
        m=1;
        for(i=0;i<10;i++)
            ins[i]=0;
        for(i=1;i<=k;i++)
        {
            for(j=0;j<m;j++)
            {
                x=a[j]*i+tep;
                a[j]=x%10;
                tep=x/10;
            }
            while(tep!=0)
            {
                a[m]=tep%10;
                tep/=10;
                m++;
            }
        }
        cout<<k<<"! --"<<endl;
        for(i=0;i<m;i++)
            ins[a[i]]++;
        cout<<"  (0)  "<<ins[0]<<"  (1)  "<<ins[1]<<"  (2)  "<<ins[2]<<"  (3)  "<<ins[3]<<"  (4)  "<<ins[4]<<endl;
        cout<<"  (5)  "<<ins[5]<<"  (6)  "<<ins[6]<<"  (7)  "<<ins[7]<<"  (8)  "<<ins[8]<<"  (9)  "<<ins[9]<<endl;
    }
}
