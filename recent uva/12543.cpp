/*#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cctype>
using namespace std;
int main()
{
    char in[10001], out[10001];
    int mx=-1;
    while(scanf("%s",in))
    {
        if(!strcmp(in,"E-N-D"))
            break;
        int l=strlen(in);
        int c=0;
        for(int i=0;i<l;++i)
        {
            if((in[i]>=97&&in[i]<=122)||(in[i]>=65&&in[i]<=90)||in[i]=='-')
                continue;
            else
                ++c;
        }
        l-=c;
        if(l>mx)
        {
            mx=l;
            strcpy(out,in);
        }
    }
    for(int i=0;i<mx;++i)
        printf("%c", tolower(out[i]));
    printf("\n");
}
*/
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    char s[1000005],a[1000005];
    int max=1;
    while(sc("%s",s))
    {
        if(!strcmp(s,"E-N-D"))
            break;
        int l=strlen(s);
        int c=0;
        for(int i=0; i<l; i++)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]=='-')
                continue;
            else
                c++;
        }
        l=l-c;
        if(max<l)
        {
            max=l;
            strcpy(a,s);
        }
    }
    int l=strlen(a);
    for(int i=0; i<l; i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
            pf("%c",a[i]+32);
        else if(a[i]>='a'&&a[i]<='z'||a[i]=='-')
            pf("%c",a[i]);
    }
    pf("\n");
    return 0;
}
