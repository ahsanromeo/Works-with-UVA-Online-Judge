#include <stdio.h>
using namespace std;
int main()
{
    int t, n, m, v1, v2;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        n -= 2;
        m -= 2;
        v1 = n / 3;
        if(n % 3 != 0)
            ++v1;
        v2 = m / 3;
        if(m % 3 != 0)
            ++v2;
        printf("%d\n", v1 * v2);
    }
    return 0;
}
