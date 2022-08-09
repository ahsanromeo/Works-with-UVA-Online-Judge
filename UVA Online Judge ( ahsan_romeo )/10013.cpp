#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
    long long int m, i, t;
    char s1[1000000], s2[1000000], s3[2];
    int c1, c2, c, a, b, s, pr=0;
    cin>>t;
    gets(s3);
    while(t--)
    {
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>c1>>c2;
            s1[i]=c1+48;
            s2[i]=c2+48;
        }
        if(pr!=0) cout<<endl;
        pr=1;
        c=0;
        for(i=m-1;i>=0;i--)
        {
            a=s1[i]-48;
            b=s2[i]-48+c;
            if(a+b>9)
            {
                s=(a+b)%10;
                c=(a+b)/10;
            }
            else
            {
                s=a+b;
                c=0;
            }
            s1[i]=s+48;
        }
        for(i=0;i<m;i++) cout<<s1[i];
        cout<<endl;
    }
}
