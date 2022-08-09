#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
int main()
{
    int n, q;
    while(cin>>n)
    {
        getchar();
        string s1, s2;
        map<string,string>mp;
        while(n--)
        {
            getline(cin,s1);
            getline(cin,s2);
            mp[s1]=s2;
        }
        cin>>q;
        getchar();
        string fst;
        while(q--)
        {
            getline(cin,fst);
            cout<<mp[fst]<<"\n";
        }
    }
    return 0;
}
