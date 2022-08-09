#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    getchar();
    for(int cas=1;cas<=t;++cas)
    {
        string contestant="", judge="";
        getline(cin,contestant);
        getline(cin,judge);
        printf("Case %d: ", cas);
        if(contestant==judge)
        {
            printf("Yes\n");
            continue;
        }
        for(int i=0;i<contestant.size();)
        {
            if(contestant[i]==' ')
            {
                contestant.erase(contestant.begin()+i);
            }
            else
                ++i;
        }
        if(contestant==judge)
        {
            printf("Output Format Error\n");
        }
        else
        {
            printf("Wrong Answer\n");
        }
    }
    return 0;
}
