#include <stdio.h>
#include <math.h>
int main()
{
    int n, r, tc=1, d;
    while(scanf("%d %d", &r, &n)==2)
    {
        if(r==0&&n==0)
            break;
        d=ceil(r/(n*1.0))-1;
        if(d<27)
            printf("Case %d: %d\n",tc++,d);
        else
            printf("Case %d: impossible\n",tc++);
    }
    return 0;
}
