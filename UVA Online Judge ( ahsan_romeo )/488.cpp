#include <stdio.h>
int main()
{
    int i, j, k, m, n, t, prim=0, prit;
    char s[2];
    scanf("%d", &t);
    while(t--)
    {
        gets(s);
        scanf("%d", &m);
        scanf("%d", &n);
        prit=0;
        if(prim!=0)
            printf("\n");
        prim=1;
        for(k=1;k<=n;k++)
        {
            if(prit!=0)
                printf("\n");
            prit=1;
            for(i=1;i<=m;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d", i);
                printf("\n");
            }
            for(i=m-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                    printf("%d", i);
                printf("\n");
            }
        }
    }
}
