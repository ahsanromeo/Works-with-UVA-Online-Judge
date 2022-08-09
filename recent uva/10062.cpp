#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct CH
{
    int asc, f;
    bool operator < (const CH& C) const
    {
        if(f == C.f)
            return asc > C.asc;
        return f < C.f;
    }
};
char S[1010];
CH arr[256];
void clear()
{
    for(int i = 0; i < 256; ++i)
    {
        arr[i].asc = i;
        arr[i].f = 0;
    }
}
int main()
{
    bool pri = false;
    while(gets(S))
    {
        clear();
        for(int i = 0; S[i]; ++i)
        {
            ++arr[S[i]].f;
        }
        sort(arr, arr + 256);
        if(pri)
            printf("\n");
        pri = true;
        for(int i = 0; i < 256; ++i)
        {
            if(arr[i].f)
            {
                printf("%d %d\n", arr[i].asc, arr[i].f);
            }
        }
    }
    return 0;
}
