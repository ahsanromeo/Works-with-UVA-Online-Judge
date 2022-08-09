#include <stdio.h>
#include <string.h>
int main()
{
    int i, l, t, s2;
    char s[85];
    int pat[85];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(s);
        l=strlen(s);
        s2=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='O')
                pat[i]=1;
            else
                pat[i]=0;
        }
        for(i=0;i<l-1;i++)
        {
            if(pat[i]!=0&&pat[i+1]!=0)
            {
                pat[i+1]=pat[i]+1;
            }
        }
        for(i=0;i<l;i++)
            s2+=pat[i];
        printf("%d\n", s2);
    }
}
