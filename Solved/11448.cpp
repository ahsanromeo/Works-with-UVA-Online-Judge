#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long lng;
bool cmp(string a, string b);
void biyog(string a, string b);
int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
        string a, b;
        cin >> a >> b;
        if(a == b)
        {
            puts("0");
            continue;
        }
        if(!cmp(a,b))
        {
            printf("-");
            swap(a,b);
        }
        biyog(a,b);
        puts("");
    }
    return 0;
}
bool cmp(string a, string b)
{
    int len = a.size(), len2 = b.size();
    if(len > len2)
        return true;
    if(len < len2)
        return false;
    for(int i = 0; i < len; ++i)
    {
        if(a[i] > b[i])
            return true;
        else if(a[i] < b[i])
            return false;
    }
    return true;
}
void biyog(string a, string b)
{
    string res = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int len = a.size(), c = 0;
    int l = len - b.size();
    while(l--)
        b = b + "0";
    for(int i = 0; i < len; ++i)
    {
        if(a[i] >= b[i] + c)
        {
            res += (char)(a[i] - (b[i] + c) + 48);
            c = 0;
        }
        else
        {
            res += (char)((((a[i] - 48) + 10) - ((b[i] - 48) + c)) + 48);
            c = 1;
        }
    }
    reverse(res.begin(), res.end());
    int i = 0;
    len = res.size();
    for(i = 0; i < len; ++i)
        if(res[i] != '0')
            break;
    if(i == len)
        printf("0");
    else
        while(i < len)
            printf("%c", res[i++]);
}
