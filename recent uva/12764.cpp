
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
char mat[4][290], pic[4][5];
void make_pic(char x)
{
    if(x == '0') {strcpy(pic[0], "\\ / "); strcpy(pic[1], " |  "); strcpy(pic[2], "/o\\ ");}
    else if(x == '1') {strcpy(pic[0], " o  "); strcpy(pic[1], "/|\\ "); strcpy(pic[2], "/ \\ ");}
    else if(x == '2') {strcpy(pic[0], "    "); strcpy(pic[1], "    "); strcpy(pic[2], "__\\o");}
    else if(x == '3') {strcpy(pic[0], "    "); strcpy(pic[1], "    "); strcpy(pic[2], "\\_\\o");}
    else if(x == '4') {strcpy(pic[0], "_o_ "); strcpy(pic[1], " |  "); strcpy(pic[2], "/ \\ ");}

}
int main()
{
    make_pic('4');
    cout << pic[0] << endl;
    cout << pic[1] << endl;
    cout << pic[2] << endl;
    int M;
    sf("%d", &M);
    while(M--)
    {
        mem(mat, 0);
    }
    return 0;
}
