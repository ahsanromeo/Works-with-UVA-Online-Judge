#include <iostream>
#include <cctype>
#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(char c1, char c2);
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string w;
        cin>>w;
        sort(w.begin(),w.end(),cmp);
        do
        {
            cout<<w<<endl;
        }while(next_permutation(w.begin(),w.end(),cmp));
    }
}
bool cmp(char c1, char c2)
{
    if(tolower(c1)==tolower(c2))
        return c1<c2;
    return tolower(c1)<tolower(c2);
}
