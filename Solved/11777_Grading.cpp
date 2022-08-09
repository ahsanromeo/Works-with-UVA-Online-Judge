#include <iostream>
using namespace std;
float avg(float a, float b, float c);
int main()
{
    float t1, t2, t3, a, c1, c2, c3, m;
    int t, tc=1;
    cin>>t;
    while(t--)
    {
        cin>>t1>>t2>>t3>>a>>c1>>c2>>c3;
        m=t1+t2+t3+a+avg(c1,c2,c3);
        if(m>=90) cout<<"Case "<<tc++<<": A"<<endl;
        else if(m>=80&&m<90) cout<<"Case "<<tc++<<": B"<<endl;
        else if(m>=70&&m<80) cout<<"Case "<<tc++<<": C"<<endl;
        else if(m>=60&&m<70) cout<<"Case "<<tc++<<": D"<<endl;
        else cout<<"Case "<<tc++<<": F"<<endl;
    }
}
float avg(float a, float b, float c)
{
    if(c<=a&&c<=b) return (a+b)/(2*1.0);
    if(b<=a&&b<=c) return (a+c)/(2*1.0);
    return (b+c)/(2*1.0);
}
