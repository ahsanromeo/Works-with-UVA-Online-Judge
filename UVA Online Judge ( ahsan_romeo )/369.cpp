#include <iostream>
#include <stdio.h>
using namespace std;
double fact(double n)
{
    double m=1;
    while(n!=1)
    {
        m=m*n;
        n--;
    }
    return m;
}
int main()
{
    double n, m;
    while(cin>>n>>m)
    {
        if(n==0&&m==0) break;
        else if(n==m) printf("%.0lf things taken %.0lf at a time is 1 exactly.\n", n, m);
        else printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n", n, m, (fact(n)/fact(m))/fact(n-m));
    }
}
