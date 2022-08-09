#include <iostream>
using namespace std;
int main()
{
    string s, t;
    while(cin>>s>>t)
    {
        int l1=s.size(), l2=t.size(), i, j, k=0, f=0;
        for(i=0;i<l1;++i)
            for(j=k;j<l2;++j)
                if(s[i]==t[j])
                {
                    ++f;
                    k=j+1;
                    break;
                }
        if(l1==f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
