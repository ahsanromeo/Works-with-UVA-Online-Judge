#include <stdio.h>
int main()
{
    int n, i, ara[1001], ara2[1001], u;
    while(scanf("%d", &n)&&n)
    {
        u=0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &ara[i]);
            if(ara[i])
                ara2[u++]=ara[i];
        }
        if(!u)
            printf("0");
        else
            for(i=0;i<u;i++)
            {
                printf("%d", ara2[i]);
                if(i<u-1)
                    printf(" ");
            }
        printf("\n");
    }
}
