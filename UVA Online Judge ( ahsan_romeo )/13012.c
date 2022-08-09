#include <stdio.h>
int main()
{
    int T, a, i, ans;
    while(scanf("%d", &T) == 1)
    {
        i = ans = 0;
        while(i < 5)
        {
            scanf("%d", &a);
            ans += (a == T);
            ++i;
        }
        printf("%d\n", ans);
    }
    return 0;
}
