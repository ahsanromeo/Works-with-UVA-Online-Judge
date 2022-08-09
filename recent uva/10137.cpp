#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
double cost[1001];
int main()
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        if(n == 0)
            return 0;
        double tot = 0.0, avg = 0.0, ans = 0.0, d = 0.0;
        for(int i = 0; i < n; ++i)
        {
            scanf("%lf", cost + i);
            tot += cost[i];
        }
        avg = (tot)/(n * 1.0);
        //cout << tot << " " << avg << endl;
        sort(cost, cost + n);
        for(int i = n - 1; i >= 0; --i)
        {
            if(cost[i] > avg)
            {
                d = cost[i] - avg;
                ans += d;
                cost[i] = avg;
                for(int j = 0; j < i && d > 0; ++j)
                {
                    d -= (avg - cost[j]);
                    cost[j] = avg;
                }
            }
            //cout << ans << endl;
        }
        printf("$%0.2lf\n", ans);
//        for(int i = 0; i < n; ++i)
//        {
//            printf("%0.2lf ", cost[i]);
//        }
//        cout << endl;
    }
    return 0;
}
