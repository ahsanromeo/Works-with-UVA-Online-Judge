#include <bits/stdc++.h>
using namespace std;

map < int , int > cnt;
vector < int > v;

int main()
{
    cnt.clear();
    v.clear();
    int n;
    while(scanf("%d", &n) == 1)
    {
        if(cnt[n] == 0)
            v.push_back(n);
        ++cnt[n];
    }
    for(int x : v)
        printf("%d %d\n", x, cnt[x]);
    return 0;
}
