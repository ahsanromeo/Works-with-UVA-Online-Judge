#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    char s[51];
    while(gets(s))
    {
        int l=strlen(s);
        if(l==1&&s[0]=='#')
            break;
        int f=1;
        for(int i=0;i<l-1;i++)
            if(s[i+1]>s[i])
            {
                f=0;
                break;
            }
        if(f)
        {
            printf("No Successor\n");
            continue;
        }
        next_permutation(s,s+l);
        puts(s);
    }

}
