#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int f(int n)
{
    if(n < 2)
        return 1;
    return n * f(n - 1);
}
void fun()
{
    int c = 1;
    vector<int>v(4); for(int i = 0; i < 4; ++i) v[i] = i + 1;
    do
    {
        cout << c++ << " --> ";
        for(int i = 0; i < 4; ++i) cout << v[i];
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
}
int main()
{
    fun();
    int n;
    while(cin >> n)
    {
        //--n;
        cout << f(n);
    }
    return 0;
}
