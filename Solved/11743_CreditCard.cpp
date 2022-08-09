#include <iostream>
using namespace std;
int validity(int m, int n, int o, int p);
int main()
{
    int t, a, b, c, d;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(validity(a, b, c, d)==1) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }
}
int validity(int m, int n, int o, int p)
{
    int a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3, a4, b4, c4, d4;
    int a11, a12, c11, c12, a21, a22, c21, c22, a31, a32, c31, c32, a41, a42, c41, c42, sum=0;
    a1=m/1000;
    b1=(m-1000*a1)/100;
    c1=(m-1000*a1-100*b1)/10;
    d1=(m-1000*a1-100*b1-10*c1);
    a2=n/1000;
    b2=(n-1000*a2)/100;
    c2=(n-1000*a2-100*b2)/10;
    d2=(n-1000*a2-100*b2-10*c2);
    a3=o/1000;
    b3=(o-1000*a3)/100;
    c3=(o-1000*a3-100*b3)/10;
    d3=(o-1000*a3-100*b3-10*c3);
    a4=p/1000;
    b4=(p-1000*a4)/100;
    c4=(p-1000*a4-100*b4)/10;
    d4=(p-1000*a4-100*b4-10*c4);
    a11=(a1*2)/10;
    a12=(a1*2)-10*a11;
    c11=(c1*2)/10;
    c12=(c1*2)-10*c11;
    a21=(a2*2)/10;
    a22=(a2*2)-10*a21;
    c21=(c2*2)/10;
    c22=(c2*2)-10*c21;
    a31=(a3*2)/10;
    a32=(a3*2)-10*a31;
    c31=(c3*2)/10;
    c32=(c3*2)-10*c31;
    a41=(a4*2)/10;
    a42=(a4*2)-10*a41;
    c41=(c4*2)/10;
    c42=(c4*2)-10*c41;
    sum=a11+a12+c11+c12+a21+a22+c21+c22+a31+a32+c31+c32+a41+a42+c41+c42+b1+d1+b2+d2+b3+d3+b4+d4;
    if(sum%10==0) return 1;
    else return 0;
}
