#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    string ins;
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cin>>ins;
        int l=ins.size(), i, j, f;
        double mm=0.000;
        for(i=0;i<l;i++)
        {
            if(ins[i]=='C')
            {
                int tem=0;
                f=1;
                for(j=i+1;ins[j]>=48&&ins[j]<=57;j++)
                {
                    f=0;
                    tem=tem*10+(ins[j]-48);
                }
                if(tem>=2&&tem<=99)
                    mm+=(tem*12.01);
                else if(f==1)
                    mm+=(12.01);
            }
            else if(ins[i]=='H')
            {
                int tem=0;
                f=1;
                for(j=i+1;ins[j]>=48&&ins[j]<=57;j++)
                {
                    tem=tem*10+(ins[j]-48);
                    f=0;
                }
                if(tem>=2&&tem<=99)
                    mm+=(tem*1.008);
                else if(f==1)
                    mm+=(1.008);
            }
            else if(ins[i]=='N')
            {
                int tem=0;
                f=1;
                for(j=i+1;ins[j]>=48&&ins[j]<=57;j++)
                {
                    tem=tem*10+(ins[j]-48);
                    f=0;
                }
                if(tem>=2&&tem<=99)
                    mm+=(tem*14.01);
                else if(f==1)
                    mm+=(14.01);
            }
            else if(ins[i]=='O')
            {
                int tem=0;
                f=1;
                for(j=i+1;ins[j]>=48&&ins[j]<=57;j++)
                {
                    tem=tem*10+(ins[j]-48);
                    f=0;
                }
                if(tem>=2&&tem<=99)
                    mm+=(tem*16.00);
                else if(f==1)
                    mm+=(16.00);
            }
        }
        printf("%0.3lf\n",mm);
    }
}
