#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long lng;
bool nums[20000010];
lng DP[100005];
void sieve(lng n)
{
    memset(nums, false, sizeof(nums));
    nums[0] = nums[1] = true;
    lng s = sqrt(n), k = 1;
    for(lng i = 2; i <= s; ++i)
    {
        if(!nums[i])
        {
            for(lng j = i + i; j <= n; j += i)
            {
                nums[j] = true;
            }
        }
    }
    lng i = 3;
    while(k <= 100000)
    {
        if(!nums[i] && !nums[i + 2])
        {
            DP[k++] = i;
        }
        ++i;
    }
}
int main()
{
    sieve(20000005);
    lng T;
    while(scanf("%lld", &T) == 1)
    {
        printf("\(%lld, %lld\)\n", DP[T], DP[T] + 2);
    }
}
