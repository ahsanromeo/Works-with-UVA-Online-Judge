#include <stdio.h>
int main()
{
    int n, ans[]={0,0,0,0,0,0,0,0,0,0,0,0,0,1,18,10,11,7,17,11,15,29,5,21,13,26,14,11,23,22,9,73,17,42,7,98,15,61,22,84,24,30,9,38,15,54,27,9,61,38,22,19,178,38,53,79,68,166,20,9,22,7,21,72,133,41,10,82,92,64,129,86,73,67,19,66,115,52,24,22,176,10,57,137,239,41,70,60,116,81,79,55,102,49,5,22,54,52,113,15,66};
    while(scanf("%d",&n)&&n)
        printf("%d\n",ans[n]);
    return 0;
}


/*
#include <iostream>
//#include <stdio.h>
using namespace std;
int main()
{
    //freopen("a2.cpp","w",stdout);
    int i, k, m, n, c;
    for(n=13;n<=100;++n)
    {
        bool city[1+n];
        for(m=1;;++m)
        {
            city[0]=false;
            for(i=1; i<=n; ++i)
                city[i]=true;
            c=0;
            city[1]=false;
            for(i=1; i<=n; ++i)
            {
                if(city[i]==true)
                    ++c;
                if(c==m)
                {
                    city[i]=false;
                    c=0;
                }
                if(city[13]==false)
                    break;
                if(i==n)
                    i=0;
            }
            k=0;
            for(i=1;i<=n;++i)
                if(city[i]==false)
                    ++k;
            if(k==n)
            {
                cout<<m<<",";
                break;
            }
        }
    }
}

*/
