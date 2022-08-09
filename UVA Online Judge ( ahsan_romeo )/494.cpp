#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, k, l, f;
    char c;
    char s[1000];
    while(gets(s))
    {
        k=0;
        f=0;
        l=strlen(s);
        char pat[l];
        for(i=0; i<l; i++)
            pat[i]='0';
        for(i=0; i<l; i++)
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                pat[i]='1';
                f=1;
            }
        if(f==0)
            printf("%d\n", k);
        else
        {
            for(i=0; i<l; i++)
                if(pat[i]=='1')
                {
                    k=1;
                    break;
                }
            j=i;
            for(i=j; i<l-1; i++)
            {
                if(pat[i]=='0'&&pat[i+1]=='1')
                    k++;
            }
            printf("%d\n", k);
        }
    }
}
