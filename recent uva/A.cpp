#include <iostream>
using namespace std;
int main()
{
    string s;
    while(cin >> s)
    {
        bool ok = false;
        int len = s.size();
        for(int i = 0; i < len; ++i)
        {
            string t = s.substr(i, 7);
            if(t == "0000000" || t == "1111111")
            {
                ok = true;
                break;
            }
        }
        if(ok)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
