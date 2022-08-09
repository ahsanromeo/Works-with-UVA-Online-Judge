#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    char s1[1001], s2[1001], c;
    while(cin>>s1>>c>>s2)
    {
        long double x=atof(s1), y=atof(s2);
        cout<<s1<<" "<<c<<" "<<s2<<endl;
        if(x>2147483647)
            printf("first number too big\n");
        if(y>2147483647)
            printf("second number too big\n");
        if(c=='+'&&(x+y)>2147483647)
            printf("result too big\n");
        if(c=='*'&&(x*y)>2147483647)
            printf("result too big\n");
    }
}
