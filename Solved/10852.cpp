
/// /* Bismillahir Rahmanir Rahim *\

/// S. M. Shakir Ahsan Romeo
/// Khulna University
/// CSE Discipline
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
int primes[1229];
bool nums[10001];
void sieve()
{
    mem(nums, false);
    int pos = 0;
    for(int i = 2; i <= 10000; ++i)
    {
        if(!nums[i])
        {
            for(int j = i + i; j <= 10000; j += i)
                nums[j] = true;
            primes[pos++] = i;
        }
    }
}
int main()
{
    sieve();
    int M;
    sf("%d", &M);
    while(M--)
    {
        int N;
        sf("%d", &N);
        int mx = -inf, ans = -1;
        for(int x = 0; x < 1229; ++x)
        {
            for(int p = -10000; p <= 10000; ++p)
            {
                if(p * primes[x] <= N && N < (p + 1) * primes[x] && primes[x] <= N)
                {
                    if(N - p * primes[x] > mx)
                    {
                        mx = N - p * primes[x];
                        ans = primes[x];
                    }
                }
            }
        }
        pf("%d\n", ans);
    }
    return 0;
}
