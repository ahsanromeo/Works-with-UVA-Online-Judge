#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
struct players
{
    string name;
    int att;
    int dif;
}pl[10];
bool cmpatt(players x, players y);
int main()
{
    int i, j;
    for(i=0;i<10;++i)
    {
        cin>>pl[i].name>>pl[i].att>>pl[i].dif;
    }
    sort(pl,pl+10,cmpatt);
    cout<<"\n\n\n\n";
    for(i=0;i<10;++i)
    {
        cout<<pl[i].name<<" "<<pl[i].att<<" "<<pl[i].dif<<endl;;
    }
}
bool cmpatt(players x, players y)
{
    return (x.att>y.att&&;
}
