#include <iostream>
#include <map>
#include <cstdio>
using namespace std;
int SET[5005];
int par[5005];
int best;
map<string, int>mp;
int find(int r)
{
    if(par[r] == r)
        return r;
    return par[r] = find(par[r]);
}
void join(int a, int b)
{
    int u = find(a);
    int v = find(b);
    if(u == v)
        return;
    par[u] = v;
    //SET[v] += SET[u];
    //best = SET[v] > best ? SET[v] : best;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int C, R;
    while(cin >> C >> R)
    {
        if(C == 0 && R == 0)
            return 0;
        mp.clear();
        string in, in2;
        for(int i = 0; i < C; ++i)
        {
            cin >> in;
            mp[in] = i;
            SET[i] = 1;
            par[i] = i;
        }
        best = 1;
        while(R--)
        {
            cin >> in >> in2;
            join(mp[in], mp[in2]);
        }
        cout << best << "\n";
    }
    return 0;
}
