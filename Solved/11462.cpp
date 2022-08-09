#include <stdio.h>
#include <iostream>
using namespace std;
#include <algorithm>
int ages[2000009];
int main()
{
    long long int n, i;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d", &ages[i]);
        sort(ages, ages+n);
        for(i=0;i<n;i++)
        {
            printf("%d", ages[i]);
            if(i<n-1)
                printf(" ");
        }
        printf("\n");
    }
}
