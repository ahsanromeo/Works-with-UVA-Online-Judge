#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        string s;
        getline(cin, s);
        int len = s.size();
        if(len == 0)
        {
            cout << "Yes\n";
            continue;
        }
        stack<char> st;
        bool ok = true;
        for(int i = 0; i < len; ++i)
        {
            if(s[i] == '(' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(!st.empty())
                {
                    if(st.top() != '(')
                    {
                        ok = false;
                        break;
                    }
                    st.pop();
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            else if(s[i] == ']')
            {
                if(!st.empty())
                {
                    if(st.top() != '[')
                    {
                        ok = false;
                        break;
                    }
                    st.pop();
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok && st.empty())
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
