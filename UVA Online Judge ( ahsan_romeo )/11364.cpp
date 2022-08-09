#include <stdio.h>
int main()
{
    int t, n, mn, mx, x;
    scanf("%d",&t);
    while(t--)
    {
        mx=-1;
        mn=101;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&x);
            if(x>mx)
                mx=x;
            if(mn>x)
                mn=x;
        }
        printf("%d\n",2*(mx-mn));
    }
    return 0;
}
