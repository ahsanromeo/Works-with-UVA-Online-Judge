#include <stdio.h>
#include <math.h>
double pi=2*acos(0.0);
int main()
{
    double r, n, A;
    while(scanf("%lf %lf",&r,&n)!=EOF)
    {
        A=0.5*(n*r*r*sin(2*pi/n));
        printf("%0.3lf\n",A);
    }
    return 0;
}
