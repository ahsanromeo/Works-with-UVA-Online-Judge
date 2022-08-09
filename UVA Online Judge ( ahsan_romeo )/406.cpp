#include <iostream>
#include <stdio.h>
using namespace std;
char nums[1002];
int primes[174];
int index[1002];
void sieve(int n);
int main()
{
    sieve(1001);
    int n, c, c1, i, t1, t2, m;
    while(cin>>n>>c)
    {
        printf("%d %d:",n,c);
        int l=index[n];
        if(l%2==0)
        {
            c1=2*c;
            if(c1>=l)
            {
                for(i=0;i<l;i++)
                    printf(" %d",primes[i]);
                printf("\n\n");
            }
            else
            {
                m=l/2;
                t1=m-((c1-2)/2)-1;
                t2=t1+c1-1;
                for(i=t1;i<=t2;i++)
                    printf(" %d",primes[i]);
                printf("\n\n");
            }
        }
        else
        {
            c1=2*c-1;
            if(c1>=l)
            {
                for(i=0;i<l;i++)
                    printf(" %d",primes[i]);
                printf("\n\n");
            }
            else
            {
                m=l/2;
                t1=m-((c1-1)/2);
                t2=t1+c1-1;
                for(i=t1;i<=t2;i++)
                    printf(" %d",primes[i]);
                printf("\n\n");
            }
        }
    }
}
void sieve(int n)
{
    int i, j, u=0, f;
    primes[u++]=1;
    index[0]=0;
    index[1]=1;
    for(i=2;i<n;i++)
    {
        f=0;
        if(nums[i]!='0')
        {
            for(j=i+i;j<n;j+=i)
                nums[j]='0';
            primes[u++]=i;
            f=1;
        }
        index[i]=index[i-1]+f;
    }
}
