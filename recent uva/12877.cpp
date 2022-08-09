#include <iostream>
#include <cstdio>
#include <set>
#include <vector>
using namespace std;
void call();
string field;
vector<bool>flag;
vector<string>store;
vector<char>result;
struct pairs
{
    char c;
    int n;
};
int q;
int main()
{
    //freopen("out.txt", "w", stdout);
    int n;
    while(cin>>n)
    {
        cin.ignore();
        vector<string>ff;
        string temp;
        set<char>cs;
        for(int i = 1; i < n; ++i)
        {
            cin>>temp;
            for(int j = 0; j < temp.size(); ++j)
                cs.insert(temp[j]);
            ff.push_back(temp);
        }
        cin>>temp;
        for(int j = 0; j < temp.size(); ++j)
            cs.insert(temp[j]);
        int len = cs.size();
        string lol = "";
        for(set<char>:: iterator it = cs.begin(); it != cs.end(); ++it)
        {
            lol += (*it);
        }
        q = lol.size();
        field = "0123456789";
        result.clear();
        flag.clear();
        store.clear();
        for(int i = 0; i < q; ++i)
            flag.push_back(false);
        call();
        cout<<"\n\nready\n"<<endl;

        //cout<<store.size()<<endl;
    }
    return 0;
}
void call()
{
    if(result.size()==q)
    {
        string temp = "";
        for(int y = 0; y < q; ++y)
        {
            temp += result[y];
        }
        store.push_back(temp);
//        cout<<temp<<endl;
        return;
    }
    for(int x = 0; x < 10; ++x)
    {
        if(!flag[x])
        {
            flag[x] = true;
            result.push_back(field[x]);
            call();
            flag[x] = false;
            result.pop_back();
        }
    }
}
