#include <iostream>
using namespace std;
int main()
{
    unsigned long int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        else if(n%9 == 0)
            cout << (n * 10)/9 - 1 << " " << (n * 10)/9 <<endl;
        else
            cout << (n*10)/9 <<endl;
    }
    return 0;
}
