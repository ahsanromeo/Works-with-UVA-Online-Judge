#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
#define dbg(o) cout<<(int)o<<" came here"<<endl;
int main()
{
    //freopen("in12.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    getchar();
    for(int cas = 1; cas <= T; ++cas)
    {
        vector<string>vs;
        string line;
        while(cin>>line)
        {
            if(line=="*")
                break;
            vs.push_back(line);
        }
        printf("Case %d: ", cas);
        int size = vs.size();
        if((size-3)%2!=0)
        {
            printf("Bad\n");
            continue;
        }
        int D = (size-3)/2;
        if(D<0)
        {
            printf("Bad\n");
            continue;
        }
        bool f1 = false, f2 = false;
        for(int i = 0; i < size; ++i)
        {
            if(vs[i].size()!=(D+2))
            {
                printf("Bad\n");
                f1 = true;
                break;
            }
        }
        int sz = vs[0].size();
        if(f1)
            continue;
        f1 = false;
        for(int i = 0; i < size; ++i)
        {
            if(i==0||i==D+1||i==size-1)
            {
                for(int j = 0; j < sz; ++j)
                {
                    if(j==0||j==D+1)
                    {
                        if(vs[i][0]!='.'||vs[i][j]!='.')
                        {
                            f1 = true;
                            break;
                        }
                    }
                    else if(vs[i][j]!='-')
                    {
                        f1 = true;
                        break;
                    }
                }
            }
            else
            {
                for(int j = 0; j < sz; ++j)
                {
                    if(j==0||j==D+1)
                    {
                        if(vs[i][0]!='|'||vs[i][j]!='|')
                        {
                            f1 = true;
                            break;
                        }
                    }
                    else if(vs[i][j]!='.')
                    {
                        f1 = true;
                        break;
                    }
                }
            }
            if(f1)
            {
                printf("Bad\n");
                break;
            }
        }
        if(!f1)
        {
            printf("%d\n", D);
        }
    }
    return 0;
}
