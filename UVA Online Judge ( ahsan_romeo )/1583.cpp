#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
typedef long long lng;
lng generator(lng n);
int main()
{
    char s[7];
    lng T, n;
    scanf("%lld", &T);
    getchar();
    while(T--)
    {
        gets(s);
        n=atoll(s);
        lng st=n-(9*strlen(s)), i;
        for(i=st;i<n;++i)
            if(generator(i)==n)
            {
                printf("%lld\n", i);
                break;
            }
        if(i==n)
            printf("0\n");
    }
    return 0;
}
lng generator(lng n)
{
    lng r=n, s=0;
    while(n>0)
    {
        s+=(n%10);
        n/=10;
    }
    return s+r;
}
