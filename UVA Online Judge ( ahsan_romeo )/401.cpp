#include <iostream>
#include <map>
using namespace std;
map<char, char>mp;
string s;
int len;
bool is_pal()
{
    for(int i = 0, j = len - 1; i < j; ++i, --j)
        if(s[i] != s[j])
            return false;
    return true;
}
void init()
{
    mp['A'] = 'A';
    mp['B'] = '/';
    mp['C'] = '/';
    mp['D'] = '/';
    mp['E'] = '3';
    mp['F'] = '/';
    mp['G'] = '/';
    mp['H'] = 'H';
    mp['I'] = 'I';
    mp['J'] = 'L';
    mp['K'] = '/';
    mp['L'] = 'J';
    mp['M'] = 'M';
    mp['N'] = '/';
    mp['O'] = 'O';
    mp['P'] = '/';
    mp['Q'] = '/';
    mp['R'] = '/';
    mp['S'] = '2';
    mp['T'] = 'T';
    mp['U'] = 'U';
    mp['V'] = 'V';
    mp['W'] = 'W';
    mp['X'] = 'X';
    mp['Y'] = 'Y';
    mp['Z'] = '5';
    mp['1'] = '1';
    mp['2'] = 'S';
    mp['3'] = 'E';
    mp['4'] = '/';
    mp['5'] = 'S';
    mp['6'] = '/';
    mp['7'] = '/';
    mp['8'] = '8';
    mp['9'] = '/';
}
bool is_mir()
{
    for(int i = 0, j = len - 1; i <= j; ++i, --j)
    {
        if(mp[s[i]] == '/' || mp[s[j]] == '/')
            return false;
        if(s[i] != mp[s[j]])
            return false;
    }
    return true;
}
int main()
{
    init();
    while(cin >> s)
    {
        len = s.size();
        bool f1 = is_pal();
        bool f2 = is_mir();
        cout << s;
        if(f1 && f2)
        {
            cout << " -- is a mirrored palindrome.\n\n";
        }
        else if(!f1 && !f2)
        {
            cout << " -- is not a palindrome.\n\n";
        }
        else if(f1)
        {
            cout << " -- is a regular palindrome.\n\n";
        }
        else
        {
            cout << " -- is a mirrored string.\n\n";
        }
    }
    return 0;
}
