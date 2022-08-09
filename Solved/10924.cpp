#include <stdio.h>
#include <string.h>
int isp(int n)
{
    if(n==1)
        return 1;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int i, j, l;
    char s[21];
    while(gets(s))
    {
        l=strlen(s);
        j=0;
        for(i=0;i<l;i++)
        {
            if(s[i]>=65&&s[i]<=90)
                j+=(s[i]-38);
            else if(s[i]>=97&&s[i]<=122)
                j+=(s[i]-96);
        }
        if(isp(j)==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
}
