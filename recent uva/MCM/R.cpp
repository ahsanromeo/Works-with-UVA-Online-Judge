#include <iostream>
using namespace std;
#define endl "\n"
int arr[14145];
int main()
{
    int x = 0, tot = 0;
    while(tot <= 100000000)
    {
        tot = (x * (x + 1)) >> 1;
        arr[x++] = tot;
    }
    cout << tot << endl;
    int n;
    while(cin >> n)
    {
        for(int i = 0;; ++i)
        {
            if(arr[i] >= n)
            {
                cout << arr[i] - n << endl;
                break;
            }
        }
    }
    return 0;
}
