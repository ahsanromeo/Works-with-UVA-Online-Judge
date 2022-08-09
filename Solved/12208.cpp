#include <iostream>
#include <cstdio>
using namespace std;
typedef long long lng;
lng find_ones(lng num, lng b)
{
    lng v = (lng)num/b;
    lng v2 = v >> 1;
    lng pc = v2 * b;
    if(v & 1)
        pc += num % b;
    return pc;
}
lng ber(lng n)
{
    lng rcnt = 0;
    lng st = 1;
    lng tem = n;
    while(n)
    {
        rcnt += find_ones(tem, st);
        n >>= 1;
        st <<= 1;
    }
    return rcnt;
}
int main()
{
    lng a, b;
    int cas = 1;
    while(scanf("%lld %lld", &a, &b) == 2)
    {
        if(a == 0 && b == 0)
            return 0;
        if(a > b)
            swap(a, b);
        cout << "Case " << cas++ << ": " << ber(b + 1) - ber(a) << endl;
    }
    return 0;
}
