/*#include <iostream>
using namespace std;
#include <stdio.h>
#include <cmath>
int main()
{
    double a, b, c, s, area, mn;
    while(cin>>a>>b>>c)
    {
        mn=0;
        if(mn<a) mn=a;
        if(mn<b) mn=b;
        if(mn<c) mn=c;
        if(a==0||b==0||c==0) cout<<"-1.000"<<endl;
        else if((a+b+c)<=(2*mn)) cout<<"-1.000"<<endl;
        else
        {
            s=0.5*(a+b+c);
            area=(4/3)*sqrt(s*(s-a)*(s-b)*(s-c));
            printf("%.3lf\n", area);
        }
    }
}*/
#include <stdio.h>
#include <math.h>

int main()
{
    double m1,m2,m3;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)==3){
        double med=(m1+m2+m3)/2.0;
        double area=(4/3.0)*sqrt(med*(med-m1)*(med-m2)*(med-m3));
        if(!(area>0)){
            area=-1.0;
        }
        printf("%.3lf\n",area);
        }
    return 0;
}
