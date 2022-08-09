#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int cnts[257];
int main()
{
    int t, len, i, mx;
    char s[257];
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        memset(cnts,0,sizeof(cnts));
        gets(s); len=strlen(s); mx=-10;
        for(i=0;i<len;++i)
        {
            s[i]=tolower(s[i]);
            if(s[i]>=97&&s[i]<=122)
                cnts[(int)s[i]]++;
        }
        for(i=0;i<257;++i)
        {
            if(cnts[i]>mx)
                mx=cnts[i];
        }
        for(i=0;i<257;++i)
        {
            if(cnts[i]==mx)
                printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}
