/// UVA 12347

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
struct Node
{
    lng value;
    Node* left;
    Node* right;
    Node()
    {
        left = right = nullptr;
        value = 0;
    }
};
void add(lng val, Node* par)
{
    if(val < par -> value)
    {
        if(par -> left == nullptr)
        {
            par -> left = new Node();
            par -> left -> value = val;
        }
        else
        {
            add(val, par -> left);
        }
    }
    else
    {
        if(par -> right == nullptr)
        {
            par -> right = new Node();
            par -> right->value = val;
        }
        else
        {
            add(val, par -> right);
        }
    }
}
vector<lng> out;
void solve(Node* par)
{
    if(par -> left != nullptr)
        solve(par -> left);
    if(par -> right != nullptr)
        solve(par -> right);
    out.pb(par -> value);
}
Node* Root;
int main()
{
    lng x;
    sf("%lld", &x);
    Root = new Node();
    Root -> value = x;
    while(sf("%lld", &x) == 1)
        add(x, Root);
    solve(Root);
    for(lng i = 0; i < out.size(); ++i)
        pf("%lld\n", out[i]);
    return 0;
}
