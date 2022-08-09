#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>pos,neg;
        int nn=n, s;
        while(nn--)
        {
            cin>>s;
            if(s>=0)
                pos.push_back(s);
            else
                neg.push_back(s);
        }
    }
}
