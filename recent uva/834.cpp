#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int l, h, v, i, j, k, a;
    char ch;
    while(cin>>l>>h)
    {
        string out="[";
        a=l/h;
        ch=a+48;
        out+=ch;
        out+=';';
        l=(l-a*h);
        swap(l,h);
        a=l/h;
        ch=a+48;
        out+=ch;
        out+=',';
        l=(l-a*h);
        swap(l,h);
        a=l/h;
        ch=a+48;
        out+=ch;
        out+=',';
        ch=h+48;
        out+=ch;
        cout<<out<<"]"<<endl;
    }
}
