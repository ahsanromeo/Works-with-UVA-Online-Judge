#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int main()
{
    double n, p, r;
    while(cin>>n>>p) printf("%.0lf\n", pow(p, 1/n));
}
