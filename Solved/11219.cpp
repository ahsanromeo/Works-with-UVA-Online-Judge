#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int d1, m1, y1, d2, m2, y2, a, tc=1, t1, t2, t;
    char s[3];
    cin>>t;
    while(t--)
    {
        gets(s);
        scanf("%d/%d/%d", &d2, &m2, &y2);
        scanf("%d/%d/%d", &d1, &m1, &y1);
        t2=y2*365+m2*30+d2;
        t1=y1*365+m1*30+d1;
        if(t2-t1<0)
            cout<<"Case #"<<tc++<<": Invalid birth date"<<endl;
        else
        {
            a=(t2-t1)/365;
            if(a>130) cout<<"Case #"<<tc++<<": Check birth date"<<endl;
            else cout<<"Case #"<<tc++<<": "<<a<<endl;
        }
    }
}
