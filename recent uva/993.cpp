#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;
int isp(long long n);
int main()
{
    long long n, t, i, j;
    while(cin>>n){
    vector<long long>vf;
    for(i=2;i<=n;)
    {
        if(n%i==0)
        {
            vf.push_back(i);
            n/=i;
        }
        else
            i++;
    }
    for(i=0;i<vf.size();i++)
        cout<<vf[i]<<" ";
    cout<<endl;
    }
}
int isp(long long n)
{
    if(n==0||n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;
    return 1;
}
