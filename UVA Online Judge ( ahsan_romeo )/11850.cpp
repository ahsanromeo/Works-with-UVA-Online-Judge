#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
typedef long long lng;
int main()
{
    lng n;
    while(scanf("%lld", &n)&&n!=0)
    {
        vector<lng>v;
        lng in;
        for(lng i=0;i<n;++i)
        {
            scanf("%lld", &in);
            v.push_back(in);
        }
        sort(v.begin(),v.end());
        --n;
        bool f=true;
        for(lng i=0;i<n;++i)
        {
            if(v[i+1]-v[i]>200)
            {
                f=false;
                break;
            }
        }
        if(2*(1422-v[n])>200)
            f=false;
        if(f==true)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
    return 0;
}
