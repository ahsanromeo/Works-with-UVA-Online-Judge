#include <iostream>
#include <stdio.h>
typedef long long lng;
using namespace std;
int is_pal(string n, lng t1, lng t2);
int is_al(string n);
int main()
{
    string ins;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,ins);
        lng l=ins.size();
        if(l==0)
        {
            printf("simple\n");
            continue;
        }
        if(is_al(ins)==1)
            cout<<"alindrome"<<endl;
        else if(is_pal(ins,0,l-1)==1)
            cout<<"palindrome"<<endl;
        else
            cout<<"simple"<<endl;
    }
}
int is_pal(string n, lng t1, lng t2)
{
    lng l=1+t2-t1;
    lng i, j, l2=t1-1+l/2;
    for(i=t1,j=t2;i<=l2;++i,--j)
    {
        if(n[i]!=n[j])
            return 0;
    }
    return 1;
}
int is_al(string n)
{
    lng l=n.size(), i, j, f1, f2, m;
    for(i=0,m=l-1;i<l-1;++i,--m)
    {
        f1=0; f2=0;
        if(is_pal(n,0,i)==1)
        {
            f1=1;
            if(is_pal(n,i+1,l-1)==1)
            {
                f2=1;
                break;
            }
        }
        else if(is_pal(n,m,l-1)==1)
        {
            f1=1;
            if(is_pal(n,0,m-1)==1)
            {
                f2=1;
                break;
            }
        }
    }
    if(f1==1&&f2==1)
        return 1;
    return 0;
}
