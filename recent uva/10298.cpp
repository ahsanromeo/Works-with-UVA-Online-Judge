#include <iostream>
using namespace std;
#include <stdio.h>
#include <set>
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(s==".")
            break;
        long long l1=s.size();
        set<char>cs;
        for(long long i=0;i<l1;i++)
            cs.insert(s[i]);
        long long l2=cs.size();
        long long n=l1/l2;
        cout<<n<<endl;
    }
}
