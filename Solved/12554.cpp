#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int n, i, j, f, v, c, k;
    char name[101][101];
    while(cin>>n)
    {
        getchar();
        for(i=0;i<n;i++)
            gets(name[i]);
        f=ceil(n/16.0);
        c=f*16;
        for(i=0,j=1,k=0;j<=c;i++,j++,k++)
        {

            if(i==16)
                i=0;
            v=i%16;
            cout<<name[k%n];
            if(v==0||v==4||v==8||v==12)
                cout<<": Happy"<<endl;
            else if(v==1||v==5||v==9||v==13)
                cout<<": birthday"<<endl;
            else if(v==2||v==6||v==10||v==14)
                cout<<": to"<<endl;
            else if(v==11)
                cout<<": Rujia"<<endl;
            else
                cout<<": you"<<endl;
        }
    }
}
