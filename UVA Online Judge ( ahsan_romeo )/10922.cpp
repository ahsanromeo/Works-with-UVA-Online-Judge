#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int sumd(int n)
{
    int i, sum=0;
    for(;n!=0;)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    char s[1050];
    int i, j, l, sum, k;
    while(gets(s))
    {
        l=strlen(s);
        if(l==1&&s[0]=='0')
            break;
        sum=0;
        for(i=0;i<l;i++)
            sum+=(s[i]-48);
        if(sum%9==0)
        {
            k=1;
            while(sum>9)
            {
                k++;
                sum=sumd(sum);
            }
            cout<<s<<" is a multiple of 9 and has 9-degree "<<k<<"."<<endl;
        }
        else
            cout<<s<<" is not a multiple of 9."<<endl;
    }
}
