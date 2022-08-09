#include <iostream>
#include <stdio.h>
using namespace std;
int gcd(int a, int b);
int main()
{
    int a, b;
    while(scanf("%d/%d", &a, &b)!=EOF)
    {
        cout<<a/gcd(a, b)<<"/"<<b/gcd(a, b)<<"\n"<<endl;
    }
}
int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}
