#include <vector>
//#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    //freopen("490i.txt","r",stdin);
    vector<string>vs;
    string ins;
    int ml=-1, i, j;
    while(getline(cin,ins))
    {
        int ll=ins.size();
        if(ll>ml)
            ml=ll;
        vs.push_back(ins);
    }
    int vsl=vs.size();
    for(i=0;i<vsl;++i)
        for(j=vs[i].size();j<ml;++j)
            vs[i]+=' ';
    for(i=0;i<ml;++i)
    {
        for(j=vsl-1;j>=0;--j)
            cout<<vs[j][i];
        cout<<endl;
    }
}
