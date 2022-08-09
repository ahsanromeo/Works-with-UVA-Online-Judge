#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;
#define INF 30000
int mat[1001][1001];
int Next[1001][1001];
vector<int>path;
vector<string>vs;
void fun(string s)
{
    s = " " + s;
    int len = s.size();
    vs.clear();
    int f = 0;
    for(int i = 0; i < len; ++i)
    {
        if(s[i] == ' ')
        {
            string t = "";
            for(int j = i + 1; j < len && s[j] != ' '; ++j)
            {
                t += s[j];
                ++i;
            }
            vs.push_back(t);
        }
    }
}
void findpath(int i, int j)
{
    path.clear();
    path.push_back(i);
    while(i != j)
    {
        i = Next[i][j];
        path.push_back(i);
    }
}
int main()
{
    //freopen("infloy.txt", "r", stdin);
    int M, pos;
    cin >> M;
    string line;
    getline(cin, line);
    cin.ignore();
    for(int cas = 1; cas <= M; ++cas)
    {
        getline(cin, line);
        fun(line);
        int pos = vs.size();
        for(int i = 1; i <=pos; ++i)
        {
            mat[1][i] = atoi(vs[i - 1].c_str());
            Next[1][i] = i;
            if(mat[1][i] == -1)
                mat[1][i] = INF;
        }
        for(int i = 2; i <= pos; ++i)
        {
            getline(cin, line);
            fun(line);
            for(int j = 1; j <=pos; ++j)
            {
                mat[i][j] = atoi(vs[j - 1].c_str());
                Next[i][j] = j;
                if(mat[i][j] == -1)
                    mat[i][j] = INF;
            }
        }
        int tax[pos + 1];
        getline(cin, line);
        fun(line);
        for(int i = 1; i <= pos; ++i)
        {
            tax[i] = atoi(vs[i - 1].c_str());
        }
        for(int k = 1; k <= pos; ++k)
        {
            for(int i = 1; i <= pos; ++i)
            {
                for(int j = 1; j <= pos; ++j)
                {
                    int ne = mat[i][k] + mat[k][j] + tax[k];
                    if(ne < mat[i][j])
                    {
                        mat[i][j] = ne;
                        Next[i][j] = Next[i][k];
                    }
                }
            }
        }
        int s = 0;
        while(getline(cin, line) && line.size() > 0)
        {
            fun(line);
            if(s > 0)
                cout << "\n";
            s = 1;
            int p = atoi(vs[0].c_str()), q = atoi(vs[1].c_str()), len;
            cout << "From " << p << " to " << q << " :\nPath: ";
            findpath(p, q);
            len = path.size();
            for(int i = 0; i < len; ++i)
            {
                if(i)
                    cout << "-->";
                cout << path[i];
            }
            cout << "\nTotal cost : " << mat[p][q] << "\n";
        }
    }
    return 0;
}
