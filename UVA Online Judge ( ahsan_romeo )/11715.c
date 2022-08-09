#include <stdio.h>
#include <math.h>
main()
{
    double x, y, z, u, v, a, t, s, m, n;
    int c=0, f;
    while(scanf("%d", &f))
    {
        if(f==0)
        {
            break;
        }
        scanf("%lf%lf%lf", &x, &y, &z);
        if(f==1)
        {
            a=(y-x)/z;
            s=x*z+0.5*a*z*z;
            m=s, n=a;
            c++;
        }
        else if(f==2)
        {
            t=(y-x)/z;
            s=(y*y-x*x)/(2*z);
            m=s, n=t;
            c++;
        }
        else if(f==3)
        {
            v=sqrt(x*x+2*y*z);
            t=(v-x)/y;
            m=v, n=t;
            c++;
        }
        else if(f==4)
        {
            u=sqrt(x*x-2*y*z);
            t=(x-u)/y;
            m=u, n=t;
            c++;
        }
        printf("Case %d: %.3lf %.3lf\n", c, m, n);
    }
}
