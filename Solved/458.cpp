#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    int i, l, j, k;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
            printf("%c", s[i]-7);
    }
}
