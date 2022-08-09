#include <iostream>
#include <cstdio>
#include <set>
#include <cstdlib>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s=="*")
            return 0;
        int len=s.size();
        s=" "+s;
        set<char>cs;
        for(int i=0;i<len;++i)
            if(s[i]==' ')
                cs.insert(tolower(s[i+1]));
        if(cs.size()==1)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
