#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float h, m, h1, m1, d;
    while(scanf("%f:%f", &h, &m)==2)
    {
        if(h==0&&m==0)
        {
            break;
        }
        if(h==12)
        {
            h=0;
        }
        m1=6*m;
        h1=30*h+m/(2*1.0);
        if(h1>m1)
            d=h1-m1;
        else
            d=m1-h1;
        if(d>180)
            d=360-d;
        printf("%.3f\n", d);
    }
}
