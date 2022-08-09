#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <cstring>
using namespace std;
#define MAX 2147483647
typedef long long lng;
map<lng, int> mp;
char s[10000], out[110];
bool use[50];
int main()
{
    mp[1] = 1;
    mp[2] = 2;
    int ser = 3;
    lng c1 = 1, c2 = 2, temp = 0;
    while(temp <= MAX)
    {
        temp = c1 + c2;
        mp[temp] = ser++;
        c1 = c2;
        c2 = temp;
    }
    int T, N;
    scanf("%d", &T);
    while(T--)
    {
        memset(out, 0, sizeof(out));
        memset(use, false, sizeof(use));
        scanf("%d", &N);
        vector<lng> arr(N);
        lng mx = 0LL;
        for(int i = 0; i < N; ++i)
        {
            scanf("%lld", &arr[i]);
            mx = max(mx, arr[i]);
            use[mp[arr[i]]] = true;
        }
        getchar();
        gets(s);
        int x = 0, y = 0, z = 0;
        for(int i = 0; s[i]; ++i)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                z = mp[arr[x++]];
                if(z)
                {
                    out[z - 1] = s[i];
                }
            }
        }
        for(map<lng, int>:: iterator it = mp.begin(); it != mp.end(); ++it)
        {
            if(it -> first > mx)
            {
                break;
            }
            int xx = it -> second;
            if(!use[xx])
            {
                out[xx - 1] = ' ';
            }
        }
        puts(out);
    }
    return 0;
}
