#include <stdio.h>
int main()
{
    int m, n, i, j, s, a, b, tc=1, g;
    while(scanf("%d %d", &m, &n)==2)
    {
        if(m==0&&n==0)
            break;
        g=m*n;
        b=2*(m-1);
        printf("Triangular Museum %d\n", tc++);
        for(i=1;i<=g;i++)
        {
            for(s=i;s<g;s++)
                printf(" ");
            if(i%m==0)
                for(j=1;j<=i/m;j++)
                {
                    printf("/");
                    for(s=1;s<=b;s++)
                        printf("_");
                    printf("\\");
                }
            else
            {
                a=2*(i%m-1);
                for(j=1;j<=1+i/m;j++)
                {
                    printf("/");
                    for(s=1;s<=a;s++)
                        printf(" ");
                    printf("\\");
                    if(j<1+i/m)
                        for(s=1;s<=b-a;s++)
                            printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
