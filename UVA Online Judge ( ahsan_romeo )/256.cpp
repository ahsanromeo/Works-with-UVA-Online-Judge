#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        if(n == 2)
        {
            puts("00");
            puts("01");
            puts("81");
            continue;
        }
        if(n == 4)
        {
            puts("0000");
            puts("0001");
            puts("2025");
            puts("3025");
            puts("9801");
            continue;
        }
        if(n == 6)
        {
            puts("000000");
            puts("000001");
            puts("088209");
            puts("494209");
            puts("998001");
            continue;
        }
        puts("00000000");
        puts("00000001");
        puts("04941729");
        puts("07441984");
        puts("24502500");
        puts("25502500");
        puts("52881984");
        puts("60481729");
        puts("99980001");
    }
    return 0;
}
