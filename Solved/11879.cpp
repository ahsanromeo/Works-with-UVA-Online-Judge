#include <stdio.h>
#include <string.h>
int main()
{
    char s[110];
    int l, i, sum;
    while(gets(s))
    {
        l=strlen(s);
        if(l==1&&s[0]=='0')
            break;
        sum=0;
        for(i=0;i<l;i++)
            sum=(sum*10+s[i]-48)%17;
        if(sum==0)
            printf("1\n");
        else
            printf("0\n");
    }
}
