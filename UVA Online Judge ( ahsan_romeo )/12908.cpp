#include <iostream>
#include <cstdio>
using namespace std;
typedef long long lng;
lng arr[14152];
int main()
{
    for(int i = 0; i < 14151; ++i)
    {
        arr[i] = (i * (i + 1)) >> 1;
    }
    lng s;
    while(scanf("%lld", &s) == 1)
    {
        if(s == 0)
            return 0;
        lng fst = 0, lst = 14145, mid;
        while(fst <= lst)
        {
            mid = (fst + lst) >> 1;
            if(arr[mid] == s)
            {
                printf("%lld %d\n", mid + 1, mid + 1);
                break;
            }
            if(s > arr[mid - 1] && s < arr[mid])
            {
                printf("%lld %d\n", arr[mid] - s, mid);
                break;
            }
            if(s > arr[mid])
            {
                fst = mid;
            }
            else if(s < arr[mid])
            {
                lst = mid;
            }
        }
    }
    return 0;
}
