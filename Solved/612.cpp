#include <iostream>
using namespace std;
#include <algorithm>
struct DNA
{
    string s;
    int order;
}D[103];
int get_order(string x);
bool cmp(DNA x, DNA y);
int main()
{
    int t, pri=0, m, n;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int i, j;
        for(i=0;i<m;i++)
        {
            cin>>D[i].s;
            D[i].order=get_order(D[i].s);
        }
        stable_sort(D,D+m,cmp);
        if(pri)
            cout<<endl;
        pri=1;
        for(i=0;i<m;i++)
            cout<<D[i].s<<endl;
    }
}
int get_order(string x)
{
    int i, j, l=x.length(), order=0;
    for(i=0;i<l-1;i++)
        for(j=i+1;j<l;j++)
            if(x[i]>x[j])
                order++;
    return order;
}
bool cmp(DNA x, DNA y)
{
    if(x.order<y.order)
        return true;
    return false;
}
