/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, ara[10], f;
    while(scanf("%d", &n))
    {
    printf("Lumberjac:\n");
    while(n--)
    {
        for(i=0;i<10;i++)
            scanf("%d", &ara[i]);
        f=0;
        for(i=0;i<9;i++)
        {
            if(ara[i]>ara[i+1])
                f++;
            else
                f--;
        }
        if(abs(f)==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
}*/
#include<stdio.h>
int main()
{
    int n,c,i,a[15],up,down;
    printf("Lumberjacks:\n");
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            for(i=0;i<10;i++)
            {
                scanf("%d",&a[i]);
            }
            up=a[0];
            down=a[1];

            if(up>down)
            {
                c=0;
                for(i=0;i<9;i++)
                {
                if(a[i]>a[i+1])
                {
                c++;
                }
                }
            }
            else if(up<down)
            {
                c=0;
                for(i=0;i<9;i++)
                {
                if(a[i]<a[i+1])
                {
                c++;
                }
                }
            }

            if(c==9)
            printf("Ordered\n");
            else
            printf("Unordered\n");

        }
    }
    return 0;
}
