#include <iostream>
using namespace std;
int main()
{
    int n, i, p, c;
    while(cin>>n)
    {
        if(n==0) break;
        c=0;
        p=n;
        for(i=1;;i++)
        {
            if(p<3)
            {
                if(p==2) c++;
                break;
            }
            p=p-2;
            c++;
        }
        cout<<c<<endl;
    }
}

