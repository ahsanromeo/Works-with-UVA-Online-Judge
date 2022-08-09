#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <set>
using namespace std;
bool check(char c)
{
    return (c>='a'&&c<='z')||(c>='A'&&c<='Z');
}
int main()
{

    ///freopen("in.txt", "r", stdin);
    string s;
    set<string>cs;
    while(cin>>s)
    {
        int len = s.size();
        string o = "";
        for(int i = 0; i <= len; ++i)
        {
            if(check(s[i]))
            {
                o+=tolower(s[i]);
            }
            else if(o!="")
            {
                cs.insert(o);
                o="";
            }
        }
    }
    for(set<string>:: iterator it = cs.begin(); it!=cs.end(); ++it)
    {
        cout<<*it<<"\n";
    }
    return 0;
}
//int main()
//{
//    set<string>res;
//    string s;
//    while(cin>>s)
//    {
//        string p="";
//        int l=s.size();
//        for(int i=0; i<=l; i++)
//        {
//            if(isalpha(s[i]))
//            {
//                p+=tolower(s[i]);
//            }
//            else if(p!="")
//            {
//                res.insert(p);
//                p="";
//            }
//        }
//    }
//    for (std::set<string>::iterator it=res.begin(); it!=res.end(); it++)
//        cout<<*it<<endl;
//
//    return 0;
//}
