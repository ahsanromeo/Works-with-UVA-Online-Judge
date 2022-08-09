#include <iostream>
#include <fstream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#define lng long long
//#define cout romeo
lng dign(lng n);
int main()
{
    //ofstream romeo("12517out.txt");
    lng m, n, i, sum;
    while(cin>>m>>n)
    {
        sum=0;
        map<int,int>v;
        cout<<endl;
        for(i=m;i<=n;i++)
        {
            sum=dign(i);
            //cout<<i<<" "<<sum<<endl;
            v[sum]++;
        }
        //sort(v.begin(),v.end());
        for(i=m;i<v.size();i++)
            cout<<i<<" "<<v[i]<<endl;
        cout<<endl;
        //cout<<i<<" "<<sum<<endl;
    }
}
lng dign(lng n)
{
    lng sum=0;
    while(n)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
