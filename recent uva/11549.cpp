#include <iostream>
#include <set>
using namespace std;
typedef long long lng;
int digs(lng n);
lng pw(lng b, lng p);
lng to_n(lng n, lng k);
int main()
{
    lng n, k;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        lng z=to_n(n,k);
        set<lng>si;
        si.insert(z);
        lng t1=k*k;
        lng t2=to_n(n,t1);
        k=t2;
        si.insert(t2);
        lng sl1=2, sl2=2;
        for(int i=0;;++i)
        {
            if(sl2>sl1)
                break;
            t1=t1=k*k;
            t2=to_n(n,t1);
            si.insert(t2);
            ++sl2;
            sl1=si.size();
            k=t2;
        }
        set<lng>:: iterator it;
        it=si.end();
        it--;
        cout<<*it<<endl;
    }
}
int digs(lng n)
{
    int l=0;
    for(;n!=0;n/=10)
        ++l;
    return l;
}
lng pw(lng b, lng p)
{
    lng r=1;
    for(lng i=0;i<p;++i)
        r*=b;
    return r;
}
lng to_n(lng n, lng k)
{
    int l=digs(k);
    if(l>n)
        k=k/(pw(10,l-n));
    return k;
}
