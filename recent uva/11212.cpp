#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
void pr(vector<int> p)
{
    for(int i = 0; i < p.size(); ++i)
        cout << p[i] << " ";
    cout << endl;
}
int main()
{
    freopen("in.txt", "r", stdin);
    int n, cas = 1;
    queue<int> q;
    while(scanf("%d", &n) && n)
    {
        vector<int> v(n);
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &v[i]);
        }
        int cnt = 0;
        for(int i = 0; i < n; ++i)
        {
            if(i + 1 != v[i])
            {
                ++cnt;
                //cout << cnt << " " << i << endl;
                for(int j = i + 1; j < n; ++j)
                {
                    if(v[j] == i + 1)
                    {

                        int c = 1;
                        while(v[j] == i + c)
                        {
                            q.push(v[j]);
                            ++c;
                            v.erase(v.begin() + j);
                        }
                        int k = i;
                        while(!q.empty())
                        {
                            c = q.front();
                            q.pop();
                            v.insert(v.begin() + k, c);
                            ++k;
                        }
                        //pr(v);
                        break;
                    }
                }
            }
        }
        //pr(v);
        printf("Case %d: %d\n", cas++, cnt);
    }
    return 0;
}
