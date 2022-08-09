#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <cstdlib>
#include <string.h>
using namespace std;
typedef long long lng;
vector<string>vs;
vector<char>r;
vector<lng>vnum;
char field[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool flag[10];
void call();
int main()
{
    memset(flag,false,sizeof(flag));
    call();
    lng num, b, tem, len = vs.size();
    int n;
    bool pri = false;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            return 0;
        if(pri)
            printf("\n");
        pri = true;
        bool notok = true;
        for(lng i = 0; i <len; ++i)
        {
            num = vnum[i];
            b = num * n;
            if(b>=10000&&b<=98765)
            {
                set<char>cs;
                tem = b;
                while(tem!=0)
                {
                    cs.insert((tem%10)+48);
                    tem/=10;
                }
                int len2 = vs[i].size();
                for(int x = 0; x < len2; ++x)
                {
                    cs.insert(vs[i][x]);
                }
                if(cs.size()==10)
                {
                    printf("%lld / ", b);
                    if(num<10000)
                        printf("0");
                    printf("%lld = %d\n", num, n);
                    notok = false;
                }
            }
        }
        if(notok)
        {
            printf("There are no solutions for %d\n", n);
        }
    }
    return 0;
}
void call()
{
    if(r.size()==5)
    {
        string temp = "";
        for(int i = 0; i < 5; ++i)
        {
            temp += r[i];
        }
        vs.push_back(temp);
        vnum.push_back(atoll(temp.c_str()));
        return;
    }
    for(int x = 0; x < 10; ++x)
    {
        if(!flag[x])
        {
            flag[x]=true;
            r.push_back(field[x]);
            call();
            r.pop_back();
            flag[x]=false;
        }
    }
}
