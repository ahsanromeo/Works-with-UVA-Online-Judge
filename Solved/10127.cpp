/// not this, it is the Ones
#include <cstdio>
#include <cstring>
int n, m;
long long len;
int main()
{
    while(scanf("%d", &n) == 1)
    {
        len = 0;
        m = 0;
        while(true)
        {
            ++len;
            m = (m * 10 + 1) % n;
            if(m == 0)
            {
                printf("%lld\n", len);
                break;
            }
        }
    }
    return 0;
}
