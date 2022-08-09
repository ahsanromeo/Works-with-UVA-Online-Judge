#include <iostream>
#include <vector>
using namespace std;
#define lop(i,a,b) for(int i = a; i < b; ++i)
int main()
{
    int T;
    cin >> T;
    for(int cas = 1; cas <= T; ++cas)
    {
        int D, N, R;
        cin >> D >> N;
        string t, g;
        vector<int>mov[4];
        for(int i = 0; i < N; ++i)
        {
            cin >> t >> g >> R;
            if(g == "Action")
            {
                mov[0].push_back(R);
            }
            else if(g == "Comedy")
            {
                mov[1].push_back(R);
            }
            else if(g == "Horror")
            {
                mov[2].push_back(R);
            }
            else
            {
                mov[3].push_back(R);
            }
        }
        int ans = -1;
        lop(i,0,mov[0].size())
        {
            lop(j,0,mov[1].size())
            {
                lop(k,0,mov[2].size())
                {
                    lop(m,0,mov[3].size())
                    {
                        int lol = mov[0][i] + mov[1][j] + mov[2][k] + mov[3][m];
                        if(lol <= D)
                            ans = max(ans, lol);
                    }
                }
            }
        }
        cout << "Case " << cas << ": ";
        if(ans == -1)
            cout << "Movie show canceled!\n";
        else
            cout << ans << "\n";
    }
    return 0;
}
