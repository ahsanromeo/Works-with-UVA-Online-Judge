#include <iostream>
#include <stdio.h>
using namespace std;
char nums[32770];
void sieve();
int main()
{
    sieve();
    int n, i, h, c;
    while(scanf("%d",&n)&&n)
    {
        h=n/2;
        c=0;
        for(i=2;i<=h;i++)
            if(nums[i]=='1')
                if(nums[n-i]=='1')
                    c++;
        printf("%d\n",c);
    }
}
void sieve()
{
    int i, j;
    nums[0]='0';
    nums[1]='0';
    for(i=2;i<32770;i++)
        nums[i]='1';
    for(i=2;i*i<=32770;i++)
        if(nums[i]=='1')
            for(j=i+i;j<32770;j+=i)
                nums[j]='0';
}
