#include <iostream>
using namespace std;
#include <stdio.h>
char num[1000000];
int primes[78498];
void seive(int n);
int main()
{
    seive(1000000);
    int i, n, s;
    while(cin>>n&&n)
    {
        s=0;
        for(i=0;;i++)
        {
            if(n%primes[i]==0)
                s++;
            if(primes[i]>=n)
                break;
        }
        printf("%d : %d\n", n, s);
    }
}
void seive(int n)
{
    int i, j, k, u=0;
    for(i=0;i<n;i++)
        if(num[i]!='0')
        {
            k=n/(i+2);
            for(j=2;j<=k;j++)
                num[j*(i+2)-2]='0';
            primes[u++]=i+2;
        }
}
