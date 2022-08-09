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
#define MAX 200005
int arr[MAX];
lng tree[MAX * 3];
char CQ[6];
void init(lng node, lng st, lng en)
{
    if(st == en)
    {
        tree[node] = arr[st];
        return;
    }
    lng m = st + ((en - st) >> 1);
    lng left = node << 1;
    lng right = left + 1;
    init(left, st, m);
    init(right, m + 1, en);
    tree[node] = tree[left] + tree[right];
}
void upd(lng node, lng st, lng en, lng ii, int v)
{
    if(st > ii || en < ii)
        return;
    if(st == en)
    {
        tree[node] = v;
        return;
    }
    lng m = st + ((en - st) >> 1);
    lng left = node << 1;
    lng right = left + 1;
    upd(left, st, m, ii, v);
    upd(right, m + 1, en, ii, v);
    tree[node] = tree[left] + tree[right];
}
lng Q(lng node, lng st, lng en, lng i, lng j)
{
    if(st > j || en < i)
        return 0;
    if(st == en)
        return tree[node];
    lng m = st + ((en - st) >> 1);
    lng left = node << 1;
    lng right = left + 1;
    return Q(left, st, m, i, j) + Q(right, m + 1, en, i, j);
}
int main()
{
    lng N;
    int cas = 1;
    while(sf("%lld", &N) == 1)
    {
        if(N == 0)
            return 0;
        rep(i, N)
        {
            sf("%d", arr + i);
        }
        init(1LL, 1LL, N);
        if(cas > 1)
            puts("");
        pf("Case %d:\n", cas++);
        while(true)
        {
            sf("%s", CQ);
            if(CQ[0] == 'E')
                break;
            if(CQ[0] == 'S')
            {
                lng x;
                int r;
                sf("%lld %d", &x, &r);
                upd(1LL, 1LL, N, x, r);
            }
            else
            {
                lng x, y;
                sf("%lld %lld", &x, &y);
                pf("%lld\n", Q(1LL, 1LL, N, x, y));
            }
        }
    }
    return 0;
}
