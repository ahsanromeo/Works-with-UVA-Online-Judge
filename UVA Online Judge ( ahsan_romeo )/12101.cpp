/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
#define rt return
#define PI acos(-1.0)
#define eps 1e-9
#define inf (1<<30)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back
#define sf scanf
#define pf printf
#define all(x) x.begin(), x.end()
#define mem(x, y) memset(x, y, sizeof(x));
#define rep(i, x) for(int i = 0; i < x; ++i)
#define rep1(i, x) for(int i = 1; i <= x; ++i)
#define endl '\n'
#define read(x) freopen(x, "r", stdin);
#define write(x) freopen(x, "w", stdout);
map<string, bool> mp, vis;
int level[10001];
vector<string> Primes, V;
map<string, vector<string> > MV;
queue<string> Q;
string num2str(int xx)
{
    string ss = "";
    while(xx)
    {
        ss = (char)((xx % 10) + 48) + ss;
        xx /= 10;
    }
    return ss;
}
bool isprime(int xx)
{
    if(xx < 2)
        return false;
    if(xx == 2)
        return true;
    if(xx % 2 == 0)
        return false;
    int ss = sqrt(xx);
    for(int i = 3; i <= ss; i += 2)
        if(xx % i == 0)
            return false;
    return true;
}
int main()
{
    for(int i = 1009; i <= 9973; ++i)
        if(isprime(i))
        {
            string tt = num2str(i);
            mp[tt] = true;
            Primes.pb(tt);
        }
    int len = Primes.size();
    for(int i = 0; i < len; ++i)
    {
        string tt = Primes[i];
        for(int j = 3; j >= 0; --j)
        {
            string uu = tt;
            if(j == 0)
            {
                char cc = uu[j];
                while(true)
                {
                    uu[j] -= 48;
                    uu[j] = (uu[j] + 1) % 10;
                    uu[j] += 48;
                    if(uu[j] == cc)
                        break;
                    if(uu[j] == '0')
                        continue;
                    if(mp[uu])
                        MV[tt].pb(uu);
                }
            }
            else if(j == 3)
            {
                char cc = uu[j];
                while(true)
                {
                    uu[j] -= 48;
                    uu[j] = (uu[j] + 1) % 10;
                    uu[j] += 48;
                    if(uu[j] == cc)
                        break;
                    if(uu[j] == '0' || uu[j] == '2' || uu[j] == '4' || uu[j] == '6' || uu[j] == '8')
                        continue;
                    if(mp[uu])
                        MV[tt].pb(uu);
                }
            }
            else
            {
                char cc = uu[j];
                while(true)
                {
                    uu[j] -= 48;
                    uu[j] = (uu[j] + 1) % 10;
                    uu[j] += 48;
                    if(uu[j] == cc)
                        break;
                    if(mp[uu])
                        MV[tt].pb(uu);
                }
            }
        }
    }
    int T;
    sf("%d", &T);
    while(T--)
    {
        string a, b;
        cin >> a >> b;
        if(a == b)
        {
            cout << "0\n";
            continue;
        }
        mem(level, 0);
        vis.clear();
        bool fou = false;
        while(!Q.empty())
            Q.pop();
        Q.push(a);
        while(!Q.empty())
        {
            string w = Q.front();
            int wint = atoi(w.c_str());
            Q.pop();
            V = MV[w];
            len = V.size();
            for(int i = 0; i < len; ++i)
            {
                if(!vis[V[i]])
                {
                    vis[V[i]] = true;
                    int vint = atoi(V[i].c_str());
                    level[vint] = 1 + level[wint];
                    if(V[i] == b)
                    {
                        fou = true;
                        pf("%d\n", level[vint]);
                        break;
                    }
                    Q.push(V[i]);
                }
            }
            if(fou)
                break;
        }
        if(!fou)
            puts("Impossible");
    }
    return 0;
}
