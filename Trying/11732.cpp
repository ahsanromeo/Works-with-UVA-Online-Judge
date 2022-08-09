#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
typedef long long lng;
typedef vector<int> vi;
#define PI acos(-1.0)
#define eps 1e-9
#define inf (1<<30)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define pb push_back
#define sf scanf
#define pf printf
#define all(x) x.begin(), w.end()
#define mem(x, y) memset(x, y, sizeof(x));
#define rep(i, x) for(int i = 0; i < x; ++i)
#define rep1(i, x) for(int i = 1; i <= x; ++i)
#define READ freopen("in.txt", "r", stdin);
#define WRITE freopen("out.txt", "w", stdout);
#define INF 2147483646
#define dbg cout << "came here" << endl;
struct Node
{
    bool endmark;
    Node* next[37];
    Node()
    {
        for(int i = 0; i < 37; ++i)
            next[i] = NULL;
        endmark = false;
    }
}*Root;
void insert(char str[], int len)
{
    Node* curr = Root;
    for(int i = 0; i < len; ++i)
    {
        int id = 0;
        if(str[i] >= '0' && str[i] <= '9')
            id = str[i] - 22;
        else
            id = str[i] - 97;
        if(curr -> next[id] == NULL)
        {
            curr -> next[id] = new Node();
        }
        curr = curr -> next[id];
    }
    curr -> endmark = true;
}
bool search(char str[], int len)
{
    Node* curr = Root;
    for(int i = 0; i < len; ++i)
    {
        int id = 0;
        if(str[i] >= '0' && str[i] <= '9')
            id = str[i] - 22;
        else
            id = str[i] - 97;
        if(curr -> next[id] == NULL)
        {
            return false;
        }
        curr = curr -> next[id];
    }
    return curr -> endmark;
}
void del(Node* curr)
{
    for(int i = 0; i < 37; ++i)
    {
        if(curr -> next[i])
        {
            del(curr -> next[i]);
        }
    }
    delete(curr);
}
int Main()
{
    int N;
    char ss[1002];
    while(sf("%d", &N) == 1)
    {
        if(N == 0)
            return 0;
        Root = new Node();
        rep(i, N)
        {
            sf("%s", ss);
            int len = strlen(ss);
            insert(ss, len);
        }
        del(Root);
    }
    return 0;
}
/*
for(int k = 0;; ++k)
                {
                    if(s[i][k] == s[j][k])
                    {
                        if(s[i][k] == '\n')
                        {
                            ++cnt;
                            break;
                        }
                        cnt += 2;
                    }
                    else
                    {
                        ++cnt;
                        break;
                    }
                }
*/
int main()
{
    int N;
    cin >> N;
    char s[N][1001];
    for(int i = 0; i < N; ++i) sf("%s", s[i]);
    int cnt = 0;
    for(int i = 0; i < N; ++i)
    {
        for(int j = i + 1; j < N; ++j)
        {
            for(int k = 0;; ++k)
            {
                if(s[i][k] == s[j][k])
                {
                    if(s[i][k] == '\n')
                    {
                        ++cnt;
                        break;
                    }
                    cnt += 2;
                    //dbg;
                }
                else
                {
                    ++cnt;
                    break;
                }
            }
            //cout << cnt << endl;
        }
    }
    cout << cnt << endl;
}
