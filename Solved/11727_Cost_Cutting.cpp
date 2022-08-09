#include <stdio.h>
int main()
{
    int a, b, c, t, i = 1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: ", i++);
        if(a>b&&a>c)
        {
            if(b>c)
            {
                printf("%d\n", b);
            }
            else
            {
                printf("%d\n", c);
            }
        }
        else if(b>a&&b>c)
        {
            if(a>c)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("%d\n", c);
            }
        }
        else
        {
            if(a>b)
            {
                printf("%d\n", a);
            }
            else
            {
                printf("%d\n", b);
            }
        }
    }
}
