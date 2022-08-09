/// UVA 11888

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
string s;
bool is_pal(int a, int b)
{
    for(int i = a, j = b; i < j; ++i, --j)
        if(s[i] != s[j])
            return false;
    return true;
}
int main()
{
    int T;
    sf("%d", &T);
    while(T--)
    {
        cin >> s;
        int len = s.size();
        bool f = true;
        for(int i = 0; i < len - 1; ++i)
        {
            if(s[0] == s[i] && s[i + 1] == s[len - 1])
            {
                if(is_pal(0, i))
                {
                    if(is_pal(i + 1, len - 1))
                    {
                        puts("alindrome");
                        f = false;
                        break;
                    }
                }
            }
        }
        if(f)
        {
            if(is_pal(0, len - 1))
                puts("palindrome");
            else
                puts("simple");
        }
    }
    return 0;
}
