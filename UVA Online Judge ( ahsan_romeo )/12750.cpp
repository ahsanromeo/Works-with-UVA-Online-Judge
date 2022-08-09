#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    for(int cas=1;cas<=T;++cas)
    {
        printf("Case %d: ", cas);
        int n, cnt=3;
        vector<char>vc;
        char in;
        scanf("%d", &n);
        for(int i=0;i<n;++i)
        {
            cin>>in;
            vc.push_back(in);
        }
        for(int i=2;i<n;++i)
        {
            if(vc[i]!='W')
                if(vc[i-1]!='W'&&vc[i-2]!='W')
                    break;
            ++cnt;
        }
        if(cnt>n)
            printf("Yay! Mighty Rafa persists!\n");
        else
            printf("%d\n", cnt);
    }
    return 0;
}
