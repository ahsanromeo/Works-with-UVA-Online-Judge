
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
/// UVA 543
#include <bits/stdc++.h>
using namespace std;
typedef long long lng;
#define     rt             return
#define     PI             acos(-1.0)
#define     eps            1e-9
#define     inf            (1<<30)
#define     FAST           ios_base::sync_with_stdio(0);cin.tie(0);
#define     endl           '\n'
#define     pb             push_back
#define     sf             scanf
#define     pf             printf
#define     bin_sea        binary_search
#define     dbg(x)         cout << x << " came here\n";
#define     all(x)         x.begin(), x.end()
#define     mem(x, y)      memset(x, y, sizeof(x));
#define     rep(i, x)      for(int i = 0; i < x; ++i)
#define     rep1(i, x)     for(int i = 1; i <= x; ++i)
#define     pmat2(A, x, y) rep(i, x) { rep(j, y) cout << A[i][j] << ' '; cout << endl; }
#define     smat2(A, x, y) rep(i, x) rep(j, y) cin >> A[i][j];
#define     RAD_TO_DEG     180.0/PI
bool nums[1000001];
void sieve()
{
    mem(nums, false);
    for(int i = 2; i <= 1000; ++i)
        if(!nums[i])
            for(int j = i + i; j <= 1000000; j += i)
                nums[j] = true;
}
int main()
{
    sieve();
    int n;
    while(sf("%d", &n) == 1)
    {
        if(n == 0)
            return 0;
        if(!nums[n - 2])
        {
            pf("%d = %d + %d\n", n, 2, n - 2);
            continue;
        }
        for(int f = 3; f <= n - f; f += 2)
            if(!nums[f] && !nums[n - f])
            {
                pf("%d = %d + %d\n", n, f, n - f);
                break;
            }
    }
    return 0;
}
