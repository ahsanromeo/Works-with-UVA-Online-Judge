#include <iostream>
using namespace std;
#include <algorithm>
#include <stdio.h>
#include <string.h>
#define np next_permutation
int main()
{
    long long n;
    char s[11];
    cin>>n;
    getchar();
    while(n--)
    {
        gets(s);
        int l=strlen(s);
        sort(s,s+l);
        do
        {
            puts(s);
        }while(np(s,s+l));
        cout<<endl;
    }
}
