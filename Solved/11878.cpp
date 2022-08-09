#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    string s;
    int cnt = 0;
    while(cin>>s)
    {
        int len=s.size();
        if(s[len-1]=='?')
        {
            continue;
        }
        string fst="", lst="", reg="";
        int p;
        char c;
        for(int i=0;;++i)
        {
            if(s[i]=='+')
            {
                p=i;
                c='+';
                break;
            }
            else if(s[i]=='-')
            {
                p=i;
                c='-';
                break;
            }
            fst+=s[i];
        }
        for(int i=p+1;;++i)
        {
            if(s[i]=='=')
            {
                p=i;
                break;
            }
            lst+=s[i];
        }
        for(int i=p+1;i<len;++i)
            reg+=s[i];
        if(c=='+')
        {
            if(atoi(fst.c_str())+atoi(lst.c_str())==atoi(reg.c_str()))
                ++cnt;
        }
        else
        {
            if(atoi(fst.c_str())-atoi(lst.c_str())==atoi(reg.c_str()))
                ++cnt;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
