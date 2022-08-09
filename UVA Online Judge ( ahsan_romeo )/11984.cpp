#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float f, c, c1, d, f1, i, t;
    int tc=0;
    cin>>t;
    while(t--)
    {
        cin>>c>>d;
        printf("Case %d: %.2f\n", ++tc, (1.8*c+d)*5/9);
    }
}
