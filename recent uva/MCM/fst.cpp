#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int mcm(vector<int> V)
{
    int len = V.size();
    int m[len][len];
    memset(m, -1, sizeof(m));
    for(int i = 0; i < len; ++i)
        m[i][i] = 0;
    for(int i = 0; i < len - 2; ++i) /// L = 2
    {
        m[i][i + 1] = V[i] * V[i + 1] * V[i + 2];
    }
    for(int i = 0; i < len - 3; ++i) /// L = 3
    {
        m[i][i + 2] = min(m[i][i + 1] + V[i] * V[i + 2] + V[i + 3], m[i + 1][i + 2] + V[i] * V[i + 1] * V[i + 3]);
    }



    for(int i = 0; i < len; ++i) /// print m
    {
        for(int j = 0; j < len; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return m[0][len - 1]; /// return
}
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);
    v.push_back(5);
    cout << mcm(v) << endl;
    return 0;
}
