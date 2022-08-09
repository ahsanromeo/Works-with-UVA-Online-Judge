#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
map<string, int> mp;
string in1, in2;
typedef long long lng;
int par[202];
int find(int r)
{
    return par[r] == r ? r : par[r] = find(par[r]);
}
int ass, loc1, loc2;
struct edge
{
    int u, v, cost;
    bool operator < (const edge& e) const
    {
        return cost < e.cost;
    }
};
vector<edge> VE, VEO;
int mst()
{
    sort(VE.begin(), VE.end());
    int cnt = 0, ms = 0;
    for(int i = 0; i < VE.size(); ++i)
    {
        int x = find(VE[i].u);
        int y = find(VE[i].v);
        if(x != y)
        {
            par[x] = y;
            ++cnt;
            ms += VE[i].cost;
            VEO.push_back(VE[i]);
            if(cnt == ass - 2)
                break;
        }
    }
    return ms;
}
int main()
{
    freopen("inmst.txt", "r", stdin);
    lng n, r;
    int sce = 1;
    while(cin >> n >> r)
    {
        if(n == 0 && r == 0)
            return 0;
        mp.clear();
        VE.clear();
        VEO.clear();
        for(int i = 0; i <= n; ++i)
            par[i] = i;
        ass = 1;
        edge E;
        for(lng i = 0; i < r; ++i)
        {
            cin >> in1 >> in2 >> E.cost;
            if(mp.find(in1) == mp.end())
                mp[in1] = ass++;
            if(mp.find(in2) == mp.end())
                mp[in2] = ass++;
            E.u = mp[in1];
            E.v = mp[in2];
            VE.push_back(E);
        }
        cin >> in1 >> in2;
        loc1 = mp[in1];
        loc2 = mp[in2];
        cout << "Scenario #" << sce++ << "\n";
        cout << mst() << endl;
        for(int i = 0; i < VEO.size(); ++i)
        {
            cout << VEO[i].cost << " ";
        }
        cout << endl;
    }
    return 0;
}
