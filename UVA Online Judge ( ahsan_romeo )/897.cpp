#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define lng long long
char nums[10000010];
lng primes[664581];
void sieve();
string num2str(lng n);
lng bin_sea(lng n);
lng fact(lng n);
int main()
{
    //freopen("897.txt","w",stdout);
    sieve();
    lng a, b, c, d, e, f, i, j, k, l, n;
    string s;
    while(cin>>n)
    {
        d=0;
        for(i=1; i<=n; i++)
        {
            s=num2str(i);
            c=0;
            e=0;
            sort(s.begin(),s.end());
            do
            {
                a=atoll(s.c_str());
                e++;
                if(nums[a]=='1')
                    c++;
            }
            while(next_permutation(s.begin(),s.end()));
            if(e==c)
                cout<<i<<",";
                //d++;
        }
        //cout<<d<<endl;
        //a=atoll(s.c_str())+5;
        //cout<<a<<endl;
    }
}
void sieve()
{
    lng i, j, u=0;
    nums[0]='0';
    nums[1]='0';
    for(i=2; i<10000002; i++)
    {
        if(nums[i]!='0')
        {
            nums[i]='1';
            primes[u++]=i;
            for(j=i+i; j<10000002; j+=i)
                nums[j]='0';
        }
    }
    // cout<<u<<endl;
}
string num2str(lng n)
{
    string b="";
    for(; n!=0; n/=10)
        b+=((n%10)+48);
    string c="";
    for(int i=b.size()-1; i>=0; i--)
        c+=b[i];
    return c;
}
lng fact(lng n)
{
    lng r=1;
    for(lng i=1;i<=n;i++)
        r*=i;
    return r;
}
/*
#include <stdio.h>
int main()
{
    long long n;
    while(scanf("%lld",&n)&&n)
    {
        if(n>990)
        {
            printf("0\n");
            continue;
        }
        if(n==1)
        {
            printf("2\n");
            continue;
        }
        if(n==2)
        {
            printf("3\n");
            continue;
        }
        if(n==3||n==4)
        {
            printf("5\n");
            continue;
        }
        if(n==5||n==6)
        {
            printf("7\n");
            continue;
        }
        if(n>=7&&n<=9)
        {
            printf("0\n");
            continue;
        }
        if(n==10)
        {
            printf("11\n");
            continue;
        }
        if(n==11||n==12)
        {
            printf("13\n");
            continue;
        }
        if(n>=13&&n<=16)
        {
            printf("17\n");
            continue;
        }
        if(n>=17&&n<=30)
        {
            printf("31\n");
            continue;
        }
        if(n>=31&&n<=36)
        {
            printf("37\n");
            continue;
        }
        if(n>=37&&n<=70)
        {
            printf("71\n");
            continue;
        }
        if(n==71||n==72)
        {
            printf("73\n");
            continue;
        }
        if(n>=73&&n<=78)
        {
            printf("79\n");
            continue;
        }
        if(n>=79&&n<=96)
        {
            printf("97\n");
            continue;
        }
        if(n>=97&&n<=99)
        {
            printf("0\n");
            continue;
        }
        if(n>=100&&n<=112)
        {
            printf("113\n");
            continue;
        }
        if(n>=113&&n<=130)
        {
            printf("131\n");
            continue;
        }
        if(n>=131&&n<=198)
        {
            printf("199\n");
            continue;
        }
        if(n>=199&&n<=310)
        {
            printf("311\n");
            continue;
        }
        if(n>=311&&n<=336)
        {
            printf("337\n");
            continue;
        }
        if(n>=337&&n<=372)
        {
            printf("373\n");
            continue;
        }
        if(n>=373&&n<=732)
        {
            printf("733\n");
            continue;
        }
        if(n>=733&&n<=918)
        {
            printf("919\n");
            continue;
        }
        if(n>=919&&n<=990)
        {
            printf("991\n");
            continue;
        }
    }
    return 0;
}

*/
