
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
const double eps = 1e-6;
const double PI = acos(-1.0);
const double ee = 2.71828182845904523536;
//#define     rt             return
#define     inf            (1<<30)
#define     FAST           ios_base::sync_with_stdio(0);cin.tie(0);
#define     endl           '\n'
#define     pb             push_back
#define     sf             scanf
#define     pf             printf
#define     all(x)         x.begin(), x.end()
#define     xx             first
#define     yy             second
#define     bin_sea(xx,yy) binary_search(all(xx),yy)
#define     dbg(x)         cout << x << " came here\n";
#define     si(x)          sf("%d", &x);
#define     mem(x, y)      memset(x, y, sizeof(x));
#define     rep(i, x)      for(int i = 0; i < x; ++i)
#define     rep1(i, x)     for(int i = 1; i <= x; ++i)
#define     repstl(it, xx) for(auto it = xx.begin(); it != xx.end(); it++)
#define     min3(aa,bb,cc) min(aa, min(bb,cc))
#define     RAD_TO_DEG     180.0/PI
#define     read(a)        freopen(a, "r", stdin);
#define     write(a)       freopen(a, "w", stdout);
#define     pr1(aa)        cout << aa << '\n';
#define     pr2(aa,bb)     cout << aa << ' ' << bb << '\n';
#define     pr3(aa,bb,cc)  cout << aa << ' ' << bb << ' ' << cc << '\n';
#define     pr4(aa,bb,cc,dd)  cout << aa << ' ' << bb << ' ' << cc << ' ' << dd << '\n';
#define     prv(x)         rep(iii, x.size()) cout << x[iii] << ' '; cout << '\n';
#define     repbstl(it,x)  for(auto it = x.rbegin(); it != x.rend(); it++)
#define     alen(x)        sizeof(x) / sizeof(x[0]);
#define     pra(xxx)       for(auto iii : xxx) cout << iii << ' '; cout << endl;
#define     pause          int ppause; cin >> ppause;

vector<int> lef, righ;

int main()
{
    int T;
    sf("%d", &T);
    while(T--)
    {
        int l, m, ans = 0, lt = 0, rt = 0;
        sf("%d %d", &l, &m);
        l *= 100;
        lef.clear();
        righ.clear();
        while(m--)
        {
            int val;
            string dir;
            sf("%d", &val);
            cin >> dir;
            if(dir.front() == 'l')
            {
                lef.pb(val);
                lt += val;
            }
            else
            {
                righ.pb(val);
                rt += val;
            }
        }
        int d = 0;
        while(true)
        {
            if(lef.size() + righ.size() == 0)
                break;
            if(d % 2 == 0)
            {
                int now = 0;
                while(lef.size() && lef.front() + now <= l)
                {
                    now += lef.front();
                    lef.erase(lef.begin());
                }
            }
            else
            {
                int now = 0;
                while(righ.size() && righ.front() + now <= l)
                {
                    now += righ.front();
                    righ.erase(righ.begin());
                }
            }
            ++ans;
            ++d;
        }
        pf("%d\n", ans);
    }
    return 0;
}
