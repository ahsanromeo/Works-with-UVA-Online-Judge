/*#include <stdio.h>
#include <math.h>
int main()
{
    int t, tc=1;
    long long k, ft;
    double f;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld", &k);
        if(k<=180000)
            f=0;
            //printf("Case %d: 0\n", tc++);
        else if(k>180000&&k<=480000)
        {
            f=k-180000;
            f=(f*10)/(100.0);
            //ft=ceil(f);
            //printf("Case %d: %lld\n", tc++, ft);
        }
        else if(k>480000&&k<=880000)
        {
            k-=180000;
            f=(300000*10)/(100.0);
            k-=300000;
            f+=(k*15)/(100.0);
            //ft=ceil(f);
            //printf("Case %d: %lld\n", tc++, ft);
        }
        else if(k>880000&&k<=1180000)
        {
            k-=180000;
            f=(300000*10)/(100.0);
            k-=300000;
            f+=(400000*15)/(100.0);
            k-=400000;
            f+=(k*20)/(100.0);
            //ft=ceil(f);
            //printf("Case %d: %lld\n", tc++, ft);
        }
        else
        {
            k-=180000;
            f=(300000*10)/(100.0);
            k-=300000;
            f+=(400000*15)/(100.0);
            k-=400000;
            f+=(300000*20)/(100.0);
            k-=400000;
            k-=180000;
            f=(300000*10)/(100.0);
            k-=300000;
            f+=(400000*15)/(100.0);
            k-=400000;
            f+=(k*25)/(100.0);
            //ft=ceil(f);
            //printf("Case %d: %lld\n", tc++, ft);
        }
        if(f>0.0&&f<2000.0)
            printf("Case %d: 2000\n", tc++);
        else
        {
            ft=ceil(f);
            printf("Case %d: %lld\n", tc++, ft);
        }
    }
}

*/
#include<iostream>

using namespace std;

int main()
{
    long long int n,t,i=1;
    double k,m,r;
    cin>>t;

    while(t--)
    {
        cin>>k;

        if(k<=180000.0) r=0.0;
        else if(k>180000.0&&k<=480000.0)
            r=(k-180000.0)*0.1;

        else if(k>480000.0&&k<=880000.0)
            r=((k-480000.0)*0.15)+30000.0;

        else if(k>880000.0&&k<=1180000.0)
            r=((k-880000.0)*0.2)+90000.0;

        else if(k>1180000)
            r=((k-1180000.0)*0.25)+150000.0;


        if(r>0.0&&r<2000.0)r=2000.0;

        n=static_cast<int>(r);//cout<<n<<endl<<r<<endl;
        if(n<r)n++;

        cout<<"Case "<<i++<<": "<<n<<endl;

    }

    return 0;
}
