#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    int i, n, tc=1, test, l, w, t, a, b;
    char mat[11];
    cin>>test;
    while(test--)
    {
        w=0; t=0; a=0, b=0;
        cin>>n;
        scanf("%s", mat);
        l=strlen(mat);
        for(i=0;i<l;i++)
        {
            if(mat[i]=='W') w++;
            else if(mat[i]=='B')  b++;
            else if(mat[i]=='T')  t++;
            else if(mat[i]=='A') a++;
        }
        if(a==n) cout<<"Case "<<tc++<<": ABANDONED"<<endl;
        else if(b==n-a&&t==0&&w==0) cout<<"Case "<<tc++<<": BANGLAWASH"<<endl;
        else if(w==n-a&&t==0&&b==0) cout<<"Case "<<tc++<<": WHITEWASH"<<endl;
        else if(w==b) cout<<"Case "<<tc++<<": DRAW "<<w<<" "<<t<<endl;
        else if(w>b) cout<<"Case "<<tc++<<": WWW "<<w<<" - "<<b<<endl;
        else if(b>w) cout<<"Case "<<tc++<<": BANGLADESH "<<b<<" - "<<w<<endl;
    }
}
