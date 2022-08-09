#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, l, g, r;
    char s[110];
    while(scanf("%d", &g)==1)
    {
        if(g==0)
            break;
        getchar();
        gets(s);
        l=strlen(s);
        r=l/g;
        /*int ara[r];
        for(i=0;i<r;i++)
            */
        for(j=1;j<=g;j++)
        {
            for(i=r*j-1;i>=r*(j-1);i--)
                printf("%c", s[i]);
        }
        printf("\n");
    }
}
