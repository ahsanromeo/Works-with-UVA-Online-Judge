#include <stdio.h>
int main()
{
    int n, g, a, tc=1, in;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            return 0;
        g=0; a=0;
        while(n--)
        {
            scanf("%d", &in);
            if(in==0)
                ++a;
            else
                ++g;
        }
        printf("Case %d: %d\n", tc++, g-a);
    }
    return 0;
}
