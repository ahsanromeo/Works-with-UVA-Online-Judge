#include <iostream>
#include <cstdio>
using namespace std;
struct subj
{
    string name;
    int time;
};
int main()
{
    int T, D, n;
    cin>>T;
    for(int cas=1;cas<=T;++cas)
    {
        cin>>n;
        subj ss[n];
        for(int i=0;i<n;++i)
        {
            cin>>ss[i].name>>ss[i].time;
        }
        cin>>D; int D2=D+5;
        string ass; cin>>ass;
        bool ok=true;
        cout<<"Case "<<cas<<": ";
        for(int i=0;i<n;++i)
        {
            if(ass==ss[i].name)
            {
                if(ss[i].time<=D)
                {
                    cout<<"Yesss\n";
                    ok=false;
                    break;
                }
                else if(ss[i].time<=D2)
                {
                    cout<<"Late\n";
                    ok=false;
                    break;
                }
            }
        }
        if(ok)
        {
            cout<<"Do your own homework!\n";
        }
    }
    return 0;
}
