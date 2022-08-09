#include <stdio.h>
#include <string.h>
int sbstr(char s[],char t[]);
int main()
{
    char s[100001], t[1001][1001];
    int tc, q, i;
    scanf("%d", &tc);
    getchar();
    while(tc--)
    {
        gets(s);
        scanf("%d", &q);
        getchar();
        for(i=0;i<q;i++)
        {
            gets(t[i]);
            if(sbstr(s,t[i]))
                printf("y\n");
            else
                printf("n\n");
        }
    }
}
int sbstr(char s[],char t[])
{
    int l=strlen(t), i;
    for(i=0;i<l;i++)
        if(s[i]!=t[i])
            return 0;
    return 1;
}
