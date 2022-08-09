#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tc,t=1;
    double u,v,dist,t1,t2,td;
    scanf("%d", &tc);
    while(tc--)
    {
        scanf("%lf%lf%lf",&dist,&v,&u);
        if(v==0 || u == 0 || v >=u)
        {
            printf("Case %d: can't determine\n",t++);
            continue;
        }
        t1 = (1.0*dist)/(u*1.0);
        t2 = (1.0*dist)/(sqrt((u*u)-(v*v))*1.0);
        td = fabs(t2-t1);
        printf("Case %d: %.3lf\n",t++,td);
    }
}
