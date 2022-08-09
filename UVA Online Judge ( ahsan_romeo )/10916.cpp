#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n)==1)
    {
        if(n==0)
            break;
        if(n<1960)
            printf("0\n");
        else if(n>=1960&&n<=1969)
            printf("3\n");
        else if(n>=1970&&n<=1979)
            printf("5\n");
        else if(n>=1980&&n<=1989)
            printf("8\n");
        else if(n>=1990&&n<=1999)
            printf("12\n");
        else if(n>=2000&&n<=2009)
            printf("20\n");
        else if(n>=2010&&n<=2019)
            printf("34\n");
        else if(n>=2020&&n<=2029)
            printf("57\n");
        else if(n>=2030&&n<=2039)
            printf("98\n");
        else if(n>=2040&&n<=2049)
            printf("170\n");
        else if(n>=2050&&n<=2059)
            printf("300\n");
        else if(n>=2060&&n<=2069)
            printf("536\n");
        else if(n>=2070&&n<=2079)
            printf("966\n");
        else if(n>=2080&&n<=2089)
            printf("1754\n");
        else if(n>=2090&&n<=2099)
            printf("3210\n");
        else if(n>=2100&&n<=2109)
            printf("5910\n");
        else if(n>=2110&&n<=2119)
            printf("10944\n");
        else if(n>=2120&&n<=2129)
            printf("20366\n");
        else if(n>=2130&&n<=2139)
            printf("38064\n");
        else if(n>=2140&&n<=2149)
            printf("71421\n");
        else if(n>=2150&&n<=2159)
            printf("134480\n");
        else if(n>=2160&&n<=2169)
            printf("254016\n");
        else
            printf("0\n");
    }
}
