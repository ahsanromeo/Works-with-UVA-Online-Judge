#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
bool nums[138];
vector<int> V;
inline void pr()
{
    for(int i = 0; i < V.size(); ++i) cout << V[i] << " "; cout << endl;
}
int main()
{
    //freopen("out.txt", "w", stdout);
    memset(nums, true, sizeof(nums));
    nums[0] = nums[1] = false;
    for(int i = 2; i * i <= 137; ++i)
        if(nums[i])
            for(int j = i + i; j <= 137; j += i)
                nums[j] = false;
    int n, cas = 1;
    while(scanf("%d", &n) == 1)
    {
        printf("Case %d:\n", cas++);
        V.clear();
        for(int i = 1; i <= n; ++i)
        {
            V.push_back(i);
        }
        int cnt = 0;
        do
        {
            pr();
        }while(next_permutation(V.begin(), V.end()));
        printf("\n");
    }
}
