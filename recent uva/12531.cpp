#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int A[181];
int abs(int a, int b)
{
    return a > b ? a - b : b - a;
}
int ang(int m)
{
    int ma = (m % 60) * 6;
    int ha = (m / 60) * 6;
    int d = abs(ha, ma);
    if(d > 180)
        return d - 180;
    return d;
}
int main()
{
    memset(A, 0, sizeof(A));
    for(int i = 0; i <= 720; ++i)
        A[ang(i)] = 1;
    int m;
    while(scanf("%d", &m) == 1)
        puts(A[m] ? "Y" : "N");
    return 0;
}
