#include <stdio.h>
int main()
{
    int t, n, m, j, k, i, tc=1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        m=0;
        j=0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &k);
            m+=(1+k/30)*10;
            j+=(1+k/60)*15;
        }
        if(m==j)
            printf("Case %d: Mile Juice %d\n", tc++, m);
        else if(m>j)
            printf("Case %d: Juice %d\n", tc++, j);
        else
            printf("Case %d: Mile %d\n", tc++, m);
    }
}
