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

string arr[101];
int main()
{
    int n;
    sf("%d", &n);
    rep1(i, n)
    cin >> arr[i];
    int q;
    sf("%d", &q);
    while(q--)
    {
        int y;
        sf("%d", &y);
        if(arr[y][0] != '?')
            cout << arr[y] << '\n';
        else
        {
            int x = -1, z = -1;
            for(int i = y - 1; i >= 1; --i)
            {
                if(arr[i][0] != '?')
                {
                    x = y - i;
                    break;
                }
            }
            for(int i = y + 1; i <= n; ++i)
            {
                if(arr[i][0] != '?')
                {
                    z = i - y;
                    break;
                }
            }
            if(x == -1)
            {
                rep(k, z)
                    printf("left of ");
                cout << arr[y + z] << '\n';
            }
            else if(z == -1)
            {
                rep(k, x)
                    printf("right of ");
                cout << arr[y - x] << '\n';
            }
            else
            {
                if(x == z)
                    cout << "middle of " << arr[y - x] << " and " << arr[y + z] << '\n';
                else if(x < z)
                {
                    rep(k, x)
                        printf("right of ");
                    cout << arr[y - x] << '\n';
                }
                else
                {
                    rep(k, z)
                        printf("left of ");
                    cout << arr[y + z] << '\n';
                }
            }
        }
    }
    return 0;
}
