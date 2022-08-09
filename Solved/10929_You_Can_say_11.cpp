#include <iostream>
#include <string.h>
#define div 11
using namespace std;
int main()
{
    int i, l, s;
    char num[1000];
    while(cin>>num)
    {
        l=strlen(num);
        s=0;
        for(i=0;i<l;i++)
        {
            s=s*10+num[i]-48;
            s=s%div;
        }
        if(s==0&&i==1) break;
        else if(s==0) cout<<num<<" is a multiple of "<<div<<"."<<endl;
        else cout<<num<<" is not a multiple of "<<div<<"."<<endl;
    }
}
