#include <iostream>
using namespace std;
int main()
{
    long long int a, b, c, d, l, i, f, count;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0&&b==0&&c==0&&d==0&l==0) break;
        count=0;
        for(i=0;i<=l;i++)
        {
            f=a*i*i+b*i+c;
            if(f%d==0) count++;
        }
        cout<<count<<endl;
    }
}
