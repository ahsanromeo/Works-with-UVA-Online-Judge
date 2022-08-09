#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
typedef long long lng;
int nums[1000010];
void sieve(lng n);
lng rev(lng n);
int main()
{
    sieve(1000005);
    lng n;
    while(scanf("%lld", &n) == 1)
    {
        printf("%lld\n", n << 1);
        if(nums[n] == 2)
            return 0;
    }
    return 0;
}
void sieve(lng n)
{
    memset(nums, 0, sizeof(false)); /// 0 means prime
    nums[1] = 2; /// 1 means not prime
    for(lng i = 2; i < n; ++i)
    {
        if(nums[i] == 0)
        {
            if(i == rev(i))
            {
                nums[i] = 2; /// 2 means palindromic prime
            }
            for(lng j = i + i; j < n; j += i)
            {
                nums[j] = 1;
            }
        }
    }
}
lng rev(lng n)
{
    lng r = 0;
    while(n)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
