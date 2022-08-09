/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
const double eps = 1e7;
const double PI = acos(-1.0);
#define     rt             return
#define     inf            (1<<30)
#define     FAST           ios_base::sync_with_stdio(0);cin.tie(0);
#define     endl           '\n'
#define     pb             push_back
#define     sf             scanf
#define     pf             printf
#define     all(x)         x.begin(), x.end()
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
#define     prv(x)         rep(iii, x.size()) cout << x[iii] << ' '; cout << '\n';

int arr[13];
map<vector<int>, bool> check;
int main()
{
    int t, n;
    while(sf("%d %d", &t, &n) == 2)
    {
        if(n == 0)
            return 0;
        check.clear();
        rep(i, n)
            sf("%d", arr + i);
        for(int i = (1 << n) - 1; i >= 0; --i)
        {
            int sum = 0;
            vector<int> vt;
            rep(j, n)
                if(i & (1 << j))
                {
                    vt.pb(arr[j]);
                    sum += arr[j];
                }
            if(sum == t)
                if(!check[vt])
                    check[vt] = true;
        }
        printf("Sums of %d:\n", t);
        if(check.size() == 0)
        {
            puts("NONE");
            continue;
        }
        for(map<vector<int>, bool>:: reverse_iterator it = check.rbegin(); it != check.rend(); it++)
        {
            rep(i, it->first.size())
            {
                if(i)
                    putchar('+');
                printf("%d", it->first[i]);
            }
            puts("");
        }
    }
    return 0;
}
