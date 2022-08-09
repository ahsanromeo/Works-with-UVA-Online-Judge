#include <iostream>
#include <map>
using namespace std;
int main()
{
    int T, R, C, M, N, val; cin>>T;
    for(int cas=1;cas<=T;++cas)
    {
        val=0;
        cin>>R>>C>>M>>N;
        string ss[R];
        map<char,int>mp;
        for(int i=0;i<R;++i)
        {
            cin>>ss[i];
            for(int j=0;j<C;++j)
            {
                mp[ss[i][j]]++;
            }
        }
        int mx=-10;
        map<char,int>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>mx)
            {
                mx=it->second;
            }
        }
        for(int i=0;i<R;++i)
        {
            for(int j=0;j<C;++j)
            {
                if(mp[ss[i][j]]==mx)
                    val+=M;
                else
                    val+=N;
            }
        }
        cout<<"Case "<<cas<<": "<<val<<"\n";
    }
    return 0;
}
