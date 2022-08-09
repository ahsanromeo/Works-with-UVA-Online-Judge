#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
string cut_str(string a, int n);
int main()
{
    int t, tp=0;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        string a;
        cin>>a;
        if(tp)
            printf("\n");
        tp=1;
        int l=a.size(), i;
        vector<int>u;
        for(i=1;i<=l;i++)
            if(l%i==0)
                u.push_back(i);
        int l2=u.size();
        for(i=0;i<l2;i++)
        {
            string b=cut_str(a,u[i]);
            int v=l/u[i];
            string c="";
            for(int j=0;j<v;j++)
                c+=b;
            if(c==a)
            {
                printf("%d\n",u[i]);
                break;
            }
        }
    }
}
string cut_str(string a, int n)
{
    string b="";
    for(int i=0;i<n;i++)
        b+=a[i];
    return b;
}
