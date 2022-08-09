/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, j, n, k;
    while(cin>>n)
    {
        int ara[n];
        int def[n-1];
        j=0;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(n==1)
        {
            cout<<"Jolly"<<endl;
            continue;
        }
        for(i=0;i<n-1;i++)
        {
            def[i]=fabs(ara[i+1]-ara[i]);
        }
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n-1;j++)
                if(def[i]>def[j])
                {
                    def[i]=def[i]+def[j];
                    def[j]=def[i]-def[j];
                    def[i]=def[i]-def[j];
                }
        if(def[0]!=1)
            j=1;
        for(i=0;i<n-2;i++)
        {
            k=fabs(def[i+1]-def[i]);
            if(k!=1)
            {
                j=1;
                break;
            }
        }
        /*for(i=0;i<n-1;i++)
        {
            if(def[i]==def[i+1])
            {
                j=1;
                break;
            }
        }*/
        /*if(j==1)
            cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;
    }
}*/

#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
int n,c,b[3010],a[3010],i;
while(scanf("%d",&n)==1)
{
c=1;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
b[i]=abs(a[i+1]-a[i]);
}
sort(b,b+i);
for(i=1;i<n;i++)
{
if(b[i]==b[i-1])
{
c=0;
break;
}
}
if(c==0)
printf("Not jolly\n");
else
printf("Jolly\n");
}
return 0;
}

