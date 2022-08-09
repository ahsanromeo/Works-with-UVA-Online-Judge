#include <stdio.h>
int main()
{
    int n, i, a, s,tc=1;
    while(scanf("%d", &n))
    {
        if(n==0) break;
        int ara[n];
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d", &ara[i]);
            s+=ara[i];
        }
        a=s/n;
        s=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]>a)
            {
                s+=(ara[i]-a);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", tc++, s);
    }
}
