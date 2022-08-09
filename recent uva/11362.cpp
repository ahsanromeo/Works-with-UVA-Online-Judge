#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, t;
    while(scanf("%d",&n))
    {
        getchar();
        int i, j, k, l, mn=20;
        string ins, low, store[n];
        for(i=0;i<n;++i)
        {
            cin>>ins;
            l=ins.size();
            store[i]=ins;
            if(mn>l)
            {
                mn=l;
                low=ins;
            }
        }
        int f=1, ft;
        for(i=0;i<n;i++)
        {
            ft=0;
            if(store[i][0]==low[0])
            {
                ft=1;
                for(j=1;j<mn;++j)
                {
                    if(low[j]!=store[i][j])
                    {
                        ft=0;
                        break;
                    }
                }
                if(ft==1)
                {
                    f=0;
                    printf("YES\n");
                    break;
                }
            }
        }
        if(f==1)
        {
            printf("NO\n");
        }
    }
}
