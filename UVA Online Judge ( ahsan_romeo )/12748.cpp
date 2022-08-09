#include <iostream>
using namespace std;
#include <cstdio>
#include <cmath>
struct rout
{
    int x;
    int y;
    int ra;
};
struct my
{
    int x;
    int y;
    bool gt;
};
int main()
{
    int T;
    scanf("%d", &T);
    for(int cas=1; cas<=T; ++cas)
    {
        int n, y;
        scanf("%d %d", &n, &y);
        printf("Case %d:\n", cas);
        rout r[n];
        my m[y];
        for(int i=0; i<n; ++i)
        {
            scanf("%d %d %d", &r[i].x, &r[i].y, &r[i].ra);
        }
        for(int i=0; i<y; ++i)
        {
            scanf("%d %d", &m[i].x, &m[i].y);
            m[i].gt=false;
        }
        for(int i=0; i<y; ++i)
        {
            if(m[i].gt==false)
            {
                for(int j=0; j<n; ++j)
                {
                    double temp=(m[i].x-r[j].x)*(m[i].x-r[j].x)+(m[i].y-r[j].y)*(m[i].y-r[j].y);
                    double d=sqrt(temp);
                    if(d<=(double)r[j].ra)
                    {
                        m[i].gt=true;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<y;++i)
        {
            if(m[i].gt)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
