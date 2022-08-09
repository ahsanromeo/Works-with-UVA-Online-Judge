#include <iostream>
using namespace std;
#include <set>
#include <vector>
#include <stdio.h>
int main()
{
    int t, tc, m, n, i, j, l1, l2;
    char s5[12];
    cin>>t;
    for(tc=1;tc<=t;tc++)
    {
        cin>>m>>n;
        getchar();
        l1=m;
        l2=n;
        set<string>cs;
        vector<string>ml;
        vector<string>nl;
        while(l1--)
        {
            gets(s5);
            ml.push_back(s5);
        }
        while(l2--)
        {
            gets(s5);
            nl.push_back(s5);
        }
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cs.insert(ml[i]+nl[j]);
        cout<<"Case "<<tc<<": "<<cs.size()<<endl;
    }
}
