#include <iostream>
using namespace std;
#include <string.h>
#include <stdio.h>
int main()
{
    int n, i, j, l, t;
    char inp[10000];
    char c;
    cin>>n;
    int cou[26];
    char uplet[26];
    for(l=0;l<26;l++)
    {
        uplet[l]=65+l;
        cou[l]=0;
    }
    for(i=1;i<=n+1;i++)
    {
        gets(inp);
        l=strlen(inp);
        for(j=0;j<l;j++)
        {
            if(inp[j]=='a'||inp[j]=='A') cou[0]++;
            else if(inp[j]=='b'||inp[j]=='B') cou[1]++;
            else if(inp[j]=='c'||inp[j]=='C') cou[2]++;
            else if(inp[j]=='d'||inp[j]=='D') cou[3]++;
            else if(inp[j]=='e'||inp[j]=='E') cou[4]++;
            else if(inp[j]=='f'||inp[j]=='F') cou[5]++;
            else if(inp[j]=='g'||inp[j]=='G') cou[6]++;
            else if(inp[j]=='h'||inp[j]=='H') cou[7]++;
            else if(inp[j]=='i'||inp[j]=='I') cou[8]++;
            else if(inp[j]=='j'||inp[j]=='J') cou[9]++;
            else if(inp[j]=='k'||inp[j]=='K') cou[10]++;
            else if(inp[j]=='l'||inp[j]=='L') cou[11]++;
            else if(inp[j]=='m'||inp[j]=='M') cou[12]++;
            else if(inp[j]=='n'||inp[j]=='N') cou[13]++;
            else if(inp[j]=='o'||inp[j]=='O') cou[14]++;
            else if(inp[j]=='p'||inp[j]=='P') cou[15]++;
            else if(inp[j]=='q'||inp[j]=='Q') cou[16]++;
            else if(inp[j]=='r'||inp[j]=='R') cou[17]++;
            else if(inp[j]=='s'||inp[j]=='S') cou[18]++;
            else if(inp[j]=='t'||inp[j]=='T') cou[19]++;
            else if(inp[j]=='u'||inp[j]=='U') cou[20]++;
            else if(inp[j]=='v'||inp[j]=='V') cou[21]++;
            else if(inp[j]=='w'||inp[j]=='W') cou[22]++;
            else if(inp[j]=='x'||inp[j]=='X') cou[23]++;
            else if(inp[j]=='y'||inp[j]=='Y') cou[24]++;
            else if(inp[j]=='z'||inp[j]=='Z') cou[25]++;
        }
    }
    for(i=0;i<26;i++)
    {
        for(j=0;j<25;j++)
        {
            if(i==j) continue;
            if(cou[j]<cou[j+1])
            {
                t=cou[j];
                cou[j]=cou[j+1];
                cou[j+1]=t;
                c=uplet[j];
                uplet[j]=uplet[j+1];
                uplet[j+1]=c;
            }
        }
    }
    for(l=0;l<26;l++)
    {
        if(cou[l]!=0)
        {
            cout<<uplet[l]<<" "<<cou[l]<<"\n";
        }
    }
}
