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
#define MAX 100000001
bool nums[MAX];
lng primes[5761457];
lng cntp;
void SE()
{
    mem(nums, false);
    nums[0] = nums[1] = true;
    cntp = 0;
    for(lng i = 2; i < MAX; ++i)
    {
        if(!nums[i])
        {
            primes[cntp++] = i;
            for(lng j = i + i; j < MAX; j += i)
                nums[j] = true;
        }
    }
    //cout << cntp;
}
lng bin_sea(lng xx)
{
    lng l = 0, h = cntp - 1, m;
    while(l <= h)
    {
        m = l + ((h - l) >> 1);
        if(primes[m] < xx && primes[m + 1] > xx)
        {
            return m;
        }
        else if(xx > primes[m])
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    return -1;
}
int main()
{
    SE();
    //cout << primes[bin_sea(2)] << endl;
    //return 0;
    lng n;
    while(sf("%lld", &n) == 1)
    {
        if(n <= 4)
        {
            pf("%lld is not the sum of two primes!\n", n);
            continue;
        }
        bool fou = false;
        lng p = n >> 1;
        if(!nums[p])
            --p;
        lng ind = bin_sea(p);
        //cout << ind << ' ' << p << endl;
        if(ind == -1)
        {
            pf("%lld is not the sum of two primes!\n", n);
            continue;
        }
        while(true)
        {
            if(ind < 0)
                break;
            //cout << ind << ' ' << primes[ind] << ' ' << n - primes[ind] << endl;
            if(!nums[n - primes[ind]])
            {
                fou = true;
                pf("%lld is the sum of %lld and %lld.\n", n, primes[ind], n - primes[ind]);
                break;
            }
            ind--;
        }
        if(!fou)
          pf("%lld is not the sum of two primes!\n", n);
    }
    return 0;
}

///pf("%lld is the sum of %lld and %lld.\n", n, n - p2, p2);
